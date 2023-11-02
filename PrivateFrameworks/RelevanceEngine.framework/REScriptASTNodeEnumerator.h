
@interface REScriptASTNodeEnumerator : NSObject {
    NSArray * _nodes;
    REScriptSymbolTable * _table;
}

- (void).cxx_destruct;
- (bool)buildSymbolTableWithError:(id*)arg1;
- (id)initWithRootNodes:(id)arg1 symbolTable:(id)arg2;

@end
