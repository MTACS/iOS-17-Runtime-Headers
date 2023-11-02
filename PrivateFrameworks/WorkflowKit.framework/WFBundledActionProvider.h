
@interface WFBundledActionProvider : WFActionProvider

@property (nonatomic, readonly) NSSet *identifiersOfActionsDisabledOnWatch;

- (id)actionDefinitionsWithIdentifiers:(id)arg1;
- (id)availableActionIdentifiers;
- (id)bundledURL;
- (id)cacheDirectoryURL;
- (id)cacheURL;
- (id)createActionWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 fallbackToMissing:(bool)arg4 isForLocalization:(bool)arg5;
- (void)createActionsForRequests:(id)arg1 forceLocalActionsOnly:(bool)arg2;
- (id)createAllAvailableActions;
- (id)createAllAvailableActionsForLocalization;
- (id)createAllAvailableActionsIncludingMissingActions:(bool)arg1;
- (id)currentVersion;
- (void)deleteCache;
- (void)fetchRemoteConfiguration:(id /* block */)arg1;
- (id)identifiersOfActionsDisabledOnWatch;

@end
