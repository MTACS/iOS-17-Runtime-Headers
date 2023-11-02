
@interface AppStoreKitInternal.AccountPresenter : AppStoreKitInternal.BasePresenter {
    void $__lazy_storage_$_notificationsAccountSectionLink;
    void accountLinks;
    void activeStoreAccount;
    void appStateController;
    void arcadeSubscriptionManager;
    void authenticating;
    void canSetupFamilySharing;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  contentSnapshot;
    void gameCenterFriendRequestCoordinator;
    void hasManagedAppleID;
    void hasPrimaryiCloudAccount;
    void hasSubscriptions;
    void iCloudAccountStore;
    void iapStateProvider;
    void localPlayer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  manageSubscriptionsURL;
    void onApplySnapshot;
    void profilePicture;
    void profilePictureDiameter;
    void restrictions;
    void snapshotQueue;
    void storeAccountStore;
    void updatesPresenter;
    void view;
}

- (void)automaticUpdatesEnabledDidChange;
- (void)familyInfoDidChange;
- (void)iCloudAccountsDidChange;
- (void)profilePictureStoreDidChange;
- (void)restrictionsDidChange:(id)arg1;
- (void)storeAccountsDidChange;

@end
