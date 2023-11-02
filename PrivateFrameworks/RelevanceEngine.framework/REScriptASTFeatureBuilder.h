
@interface REScriptASTFeatureBuilder : REScriptASTObjectBuilder

- (id)_buildTransformedFeature:(id)arg1 features:(id)arg2 node:(id)arg3 error:(id*)arg4;
- (bool)_loadIndexFromNode:(id)arg1 index:(unsigned long long*)arg2 error:(id*)arg3;
- (id)buildObjectWithBinaryExpressionNode:(id)arg1 previousExpression:(id)arg2 error:(id*)arg3;
- (id)buildObjectWithFunctionNode:(id)arg1 error:(id*)arg2;
- (id)buildObjectWithIdentifierNode:(id)arg1 error:(id*)arg2;
- (id)buildObjectWithSubscriptExpressionNode:(id)arg1 error:(id*)arg2;
- (id)objectTypeErrorDescription;

@end
