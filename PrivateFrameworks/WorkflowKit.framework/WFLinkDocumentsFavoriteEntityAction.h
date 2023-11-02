
@interface WFLinkDocumentsFavoriteEntityAction : WFLinkFavoriteEntityAction

- (void)getValueForParameterData:(id)arg1 ofProcessedParameters:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)overrideDescriptionSummary;
- (id)overrideName;
- (id)overrideParameterSummary;
- (id)parameterOverrides;

@end
