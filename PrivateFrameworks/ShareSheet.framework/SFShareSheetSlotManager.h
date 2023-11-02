
@interface SFShareSheetSlotManager : NSObject <NSXPCConnectionDelegate, SFShareSheetSlotObserverProtocol> {
    bool  _activateCalled;
    NSXPCConnection * _connection;
    <SFShareSheetSlotManagerDelegate> * _delegate;
    bool  _invalidateCalled;
    bool  _invalidateDone;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFShareSheetSlotManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activate;
- (void)activityViewControllerDidEnterBackgroundWithSessionID:(id)arg1;
- (void)activityViewControllerPerformEditActionsWithSessionID:(id)arg1;
- (void)activityViewControllerPerformedActivityWithSessionID:(id)arg1 presentationMs:(unsigned long long)arg2 totalShareTimeMs:(unsigned long long)arg3 activityType:(id)arg4 success:(bool)arg5;
- (void)activityViewControllerWillEnterForegroundWithSessionID:(id)arg1;
- (void)activityViewControllerWithSessionID:(id)arg1 didLongPressShareActivityWithIdentifier:(id)arg2;
- (void)activityViewControllerWithSessionID:(id)arg1 favoritedActivity:(bool)arg2 withIdentifier:(id)arg3 activityCategory:(long long)arg4;
- (void)activityViewControllerWithSessionID:(id)arg1 provideFeedbackForPeopleSuggestionWithIdentifier:(id)arg2;
- (void)activityViewControllerWithSessionID:(id)arg1 removedPersonWithIdentifier:(id)arg2;
- (void)activityViewControllerWithSessionID:(id)arg1 selectedActionWithIdentifier:(id)arg2;
- (void)activityViewControllerWithSessionID:(id)arg1 selectedActivityWithIdentifier:(id)arg2;
- (void)activityViewControllerWithSessionID:(id)arg1 selectedDefaultActivityWithIdentifier:(id)arg2 activityCategory:(long long)arg3;
- (void)activityViewControllerWithSessionID:(id)arg1 selectedPersonWithIdentifier:(id)arg2;
- (void)activityViewControllerWithSessionID:(id)arg1 toggledActivityWithIdentifier:(id)arg2 activityCategory:(long long)arg3;
- (void)activityViewControllerWithSessionID:(id)arg1 updatedFavoritesProxies:(id)arg2 activityCategory:(long long)arg3;
- (void)connectToDaemonWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)connectUIServiceToDaemonWithSessionID:(id)arg1;
- (id)connection;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (void)connectionEstablished;
- (void)connectionInterrupted;
- (void)createSharingURLForCollaborationRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dataSourceUpdatedWithSessionConfiguration:(id)arg1;
- (id)delegate;
- (void)deleteSharingURL:(id)arg1 containerSetupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)didPerformInServiceActivityWithIdentifier:(id)arg1 completed:(bool)arg2 items:(id)arg3 error:(id)arg4;
- (void)didUpdateAirDropTransferWithChange:(id)arg1;
- (void)ensureConnectionEstablished;
- (void)ensureXPCStarted;
- (id)exportedInterface;
- (id)init;
- (void)interrupted;
- (void)invalidate;
- (void)invalidated;
- (void)isShareOwnerOrAdminForFileURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)machServiceName;
- (void)performActivityInHostWithUUID:(id)arg1;
- (void)performAirDropActivityInHostWithNoContentView:(bool)arg1;
- (void)performExtensionActivityInHostWithBundleID:(id)arg1 request:(id)arg2;
- (void)performShortcutActivityInHostWithBundleID:(id)arg1 singleUseToken:(id)arg2;
- (void)performUserDefaultsWithFavoritesProxies:(id)arg1 suggestionProxies:(id)arg2 orderedUUIDs:(id)arg3 activityCategory:(long long)arg4;
- (id)remoteObjectInterface;
- (id)remoteObjectProxy;
- (void)requestAddParticipantsAllowedForURL:(id)arg1 share:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestCollaborativeModeForContentIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestConfigurationWithSessionID:(id)arg1 completion:(id /* block */)arg2;
- (void)requestDefaultShareModeCollaborationForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestSharedURLForFileOrFolderURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveCollaborativeMode:(id)arg1 forContentIdentifier:(id)arg2;
- (void)sendConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)shareStatusForFileURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)shouldEscapeXpcTryCatch;
- (id)synchronousRemoteObjectProxy;
- (void)willPerformInServiceActivityWithRequest:(id)arg1 completion:(id /* block */)arg2;

@end
