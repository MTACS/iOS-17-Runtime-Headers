
@protocol SHSheetInteractor <SHSheetHostService>

@required

- (SHSheetActivityPerformer *)activityPerformer;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)clearActivityForResult:(SHSheetActivityPerformerResult *)arg1;
- (<UIActivityItemsConfigurationReading> *)createActivityItemsConfiguration;
- (<SHSheetInteractorDelegate> *)delegate;
- (bool)hasSessionStarted;
- (void)invalidateRemoteSession;
- (void)performActivity:(UIActivity *)arg1;
- (void)performActivityWithRequest:(void *)arg1 forExtension:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: UISUIActivityExtensionItemDataRequest *, NSExtension *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UISUIActivityExtensionItemData *, void*
- (void)performPeopleSuggestion:(id <SHSheetUIPeopleSuggestion>)arg1;
- (void)preheatActivitiesIfNeeded;
- (void)requestServiceUpdate;
- (<SHSheetSession> *)session;
- (void)setDelegate:(id <SHSheetInteractorDelegate>)arg1;
- (void)setWantsCollaborativeSession:(bool)arg1;
- (void)startSession;
- (void)stopSession;
- (void)updateSessionWithContext:(SHSheetContext *)arg1;

@end
