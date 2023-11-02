
@interface LNClientConnection : NSObject <LNConnectionHostInterface, LNPerformActionOperationDelegate> {
    LNAppContext * _appContext;
    NSMapTable * _performActionOperations;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) LNAppContext *appContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMapTable *performActionOperations;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

+ (struct { unsigned int x1[8]; }*)currentAuditToken;

- (void).cxx_destruct;
- (id)appContext;
- (void)dealloc;
- (void)enqueuePerformActionOperation:(id)arg1;
- (void)fetchActionAppContextFromAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchActionForAppShortcutIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchActionForAutoShortcutPhrase:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchActionOutputValueWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchAppShortcutParametersWithCompletionHandler:(id /* block */)arg1;
- (void)fetchDestinationMDMAccountIdentifierForAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchDisplayRepresentationForActions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchMetadataWithCompletionHandler:(id /* block */)arg1;
- (void)fetchOptionsDefaultValuesForAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchOptionsForAction:(id)arg1 actionMetadata:(id)arg2 parameterMetadata:(id)arg3 optionsProviderReference:(id)arg4 searchTerm:(id)arg5 localeIdentifier:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)fetchParameterOptionDefaultValueForAction:(id)arg1 actionMetadata:(id)arg2 parameterIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchStateForAppIntentIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchStructuredDataWithTypeIdentifier:(long long)arg1 forEntityIdentifiers:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchSuggestedActionsForStartWorkoutAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchSuggestedActionsWithSiriLanguageCode:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchSuggestedFocusActionsForActionMetadata:(id)arg1 suggestionContext:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchViewActionsWithCompletionHandler:(id /* block */)arg1;
- (void)fetchViewEntitiesWithInteractionIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getListenerEndpointWithCompletionHandler:(id /* block */)arg1;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 appContext:(id)arg3;
- (void)performAction:(id)arg1 options:(id)arg2 executor:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)performActionOperation:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;
- (id)performActionOperations;
- (void)performAllEntitiesQueryWithEntityMangledTypeName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performPropertyQuery:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performSuggestedEntitiesQueryWithEntityMangledTypeName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performSuggestedResultsQueryWithEntityType:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queue;
- (void)removePerformActionOperation:(id)arg1;
- (void)updateAppShortcutParametersWithCompletionHandler:(id /* block */)arg1;
- (id)xpcConnection;

@end
