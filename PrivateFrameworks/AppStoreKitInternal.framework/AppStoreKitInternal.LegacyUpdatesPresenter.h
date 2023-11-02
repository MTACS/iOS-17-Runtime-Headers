
@interface AppStoreKitInternal.LegacyUpdatesPresenter : AppStoreKitInternal.BasePresenter {
    void $__lazy_storage_$_numberFormatter;
    void appStateController;
    void appStateControllerReady;
    void automaticUpdates;
    void expandedUpdates;
    void hasLoaded;
    void haveDoneInitialUpdatesFetch;
    void isUpdateAllEnabledForSection;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastServerRefreshTime;
    void onPerformAction;
    void onShowWhatsNew;
    void onUpdateAllChanged;
    void onUpdatesDataChanged;
    void organizationQueue;
    void pendingAutomaticUpdates;
    void pendingManualUpdates;
    void recentUpdates;
    void updateStore;
}

- (void)updateStoreDidChange;

@end
