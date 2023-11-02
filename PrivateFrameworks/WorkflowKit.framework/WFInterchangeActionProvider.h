
@interface WFInterchangeActionProvider : WFActionProvider

- (id)actionWithInterchangeAction:(id)arg1 serializedParameters:(id)arg2;
- (id)availableActionIdentifiers;
- (void)createActionsForRequests:(id)arg1 forceLocalActionsOnly:(bool)arg2;
- (void)deleteCache;
- (void)fetchRemoteConfiguration:(id /* block */)arg1;

@end
