
@interface REScriptASTObjectBuilder : NSObject {
    REScriptSymbolTable * _table;
}

@property (nonatomic, readonly) REScriptSymbolTable *table;

- (void).cxx_destruct;
- (id)_errorForUnsupportedNode:(id)arg1;
- (id)buildObjectWithBinaryExpressionListNode:(id)arg1 previousExpression:(id)arg2 error:(id*)arg3;
- (id)buildObjectWithBinaryExpressionNode:(id)arg1 previousExpression:(id)arg2 error:(id*)arg3;
- (id)buildObjectWithExpressionNode:(id)arg1 error:(id*)arg2;
- (id)buildObjectWithFunctionNode:(id)arg1 error:(id*)arg2;
- (id)buildObjectWithIdentifierNode:(id)arg1 error:(id*)arg2;
- (id)buildObjectWithLiteralNode:(id)arg1 error:(id*)arg2;
- (id)buildObjectWithMemberExpressionNode:(id)arg1 error:(id*)arg2;
- (id)buildObjectWithNode:(id)arg1 error:(id*)arg2;
- (id)buildObjectWithPrefixExpressionNode:(id)arg1 error:(id*)arg2;
- (id)buildObjectWithSubscriptExpressionNode:(id)arg1 error:(id*)arg2;
- (id)buildObjectWithTopLevelBinaryExpression:(id)arg1 error:(id*)arg2;
- (id)buildObjectWithTopLevelBinaryExpressionListNode:(id)arg1 error:(id*)arg2;
- (id)initWithTable:(id)arg1;
- (id)objectTypeErrorDescription;
- (id)table;

@end
