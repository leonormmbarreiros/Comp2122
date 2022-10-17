#ifndef __L22_AST_NULLPTR_NODE_H__
#define __L22_AST_NULLPTR_NODE_H__

#include <cdk/ast/expression_node.h>

namespace l22
{
    /**
     * Class for describing nullptr nodes.
     */
    class nullptr_node : public cdk::expression_node
    {
    public:
        nullptr_node(int lineno) : cdk::expression_node(lineno)
        {
        }

    public:
        void accept(basic_ast_visitor *sp, int level)
        {
            sp->do_nullptr_node(this, level);
        }
    };

} // l22

#endif
