
@interface SHSheetServiceManager : NSObject <SFCollaborationCreationDelegate, SFCollaborationService, SFShareSheetSlotManagerDelegate, SHSheetHostService> {
    long long  _connectionState;
    <SHSheetServiceManagerDelegate> * _delegate;
    UISUIActivityViewControllerConfiguration * _hostConfiguration;
    SHSheetSession * _session;
    SFShareSheetSlotManager * _slotManager;
    bool  _updateAfterConnection;
}

@property (nonatomic, readonly) long long connectionState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SHSheetServiceManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UISUIActivityViewControllerConfiguration *hostConfiguration;
@property (nonatomic, readonly) SHSheetSession *session;
@property (nonatomic, readonly) SFShareSheetSlotManager *slotManager;
@property (readonly) Class superclass;
@property (nonatomic) bool updateAfterConnection;

- (void).cxx_destruct;
- (void)_handleConnectionCompletion;
- (void)_invalidateSlotManagerIfNeeded;
- (void)_sendConfiguration:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)connectWithSession:(id)arg1;
- (void)connectionInterrupted;
- (long long)connectionState;
- (void)createSharingURLForCollaborationRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dataSourceUpdatedWithSessionConfiguration:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteSharingURL:(id)arg1 containerSetupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)didPerformInServiceActivityWithIdentifier:(id)arg1 completed:(bool)arg2 items:(id)arg3 error:(id)arg4;
- (void)didUpdateAirDropTransferWithChange:(id)arg1;
- (void)favoriteUserDefaultsActivity:(bool)arg1 withIdentifier:(id)arg2 activityCategory:(long long)arg3;
- (id)hostConfiguration;
- (id)init;
- (void)isShareOwnerForFileURL:(id)arg1 share:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)isShareOwnerOrAdminForFileURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)longPressShareActivityWithIdentifier:(id)arg1;
- (void)performActionActivityWithIdentifier:(id)arg1;
- (void)performActivityInHostWithUUID:(id)arg1;
- (void)performAirDropActivityInHostWithNoContentView:(bool)arg1;
- (void)performEditAction;
- (void)performExtensionActivityInHostWithBundleID:(id)arg1 request:(id)arg2;
- (void)performPersonSuggestionWithIdentifier:(id)arg1;
- (void)performShareActivityWithIdentifier:(id)arg1;
- (void)performShortcutActivityInHostWithBundleID:(id)arg1 singleUseToken:(id)arg2;
- (void)performUserDefaultsActivityWithIdentifier:(id)arg1 activityCategory:(long long)arg2;
- (void)performUserDefaultsWithFavoritesProxies:(id)arg1 suggestionProxies:(id)arg2 orderedUUIDs:(id)arg3 activityCategory:(long long)arg4;
- (void)provideFeedbackForPeopleSugestionIdentifier:(id)arg1;
- (void)removePersonSuggestionWithIdentifier:(id)arg1;
- (void)reportActivityWithSessionID:(id)arg1 presentationMs:(unsigned long long)arg2 totalShareTimeMs:(unsigned long long)arg3 activityType:(id)arg4 success:(bool)arg5;
- (void)requestAddParticipantsAllowedForURL:(id)arg1 share:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestCollaborativeModeForContentIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestDefaultShareModeCollaborationForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestSharedURLForFileOrFolderURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveCollaborativeMode:(id)arg1 forContentIdentifier:(id)arg2;
- (id)session;
- (void)setConnectionState:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostConfiguration:(id)arg1;
- (void)setUpdateAfterConnection:(bool)arg1;
- (void)shareStatusForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)slotManager;
- (void)toggleUserDefaultsActivityWithIdentifier:(id)arg1 activityCategory:(long long)arg2;
- (void)update;
- (bool)updateAfterConnection;
- (void)updateUserDefaultsFavorites:(id)arg1 activityCategory:(long long)arg2;
- (void)willPerformInServiceActivityWithRequest:(id)arg1 completion:(id /* block */)arg2;

@end
