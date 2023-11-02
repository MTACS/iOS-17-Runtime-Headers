
@interface SBApplicationLibraryObserver : NSObject <MCProfileConnectionObserver> {
    FBSApplicationLibrary * _appLibrary;
    NSHashTable * _applicationObservers;
    NSObject<OS_dispatch_queue> * _mainQueueProxy;
    NSHashTable * _placeholderObservers;
    NSMutableDictionary * _placeholdersByBundleID;
    XBApplicationController * _splashBoardController;
    NSMutableSet * _suspendCalloutsAssertionReasons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *placeholders;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1 table:(id)arg2;
- (id)_appBundleIDsForApplications:(id)arg1;
- (void)_didAddApplications:(id)arg1;
- (void)_didAddPlaceholders:(id)arg1;
- (void)_didCancelPlaceholders:(id)arg1;
- (void)_didChangeNetworkUsage:(bool)arg1;
- (void)_didDemoteApplications:(id)arg1;
- (void)_didRemoveApplications:(id)arg1;
- (void)_didReplaceApplications:(id)arg1;
- (void)_didUpdateApplications:(id)arg1;
- (void)_removeObserver:(id)arg1 table:(id)arg2;
- (void)_waitForLaunchImageGenerationForApplications:(id)arg1;
- (void)addApplicationLifecycleObserver:(id)arg1;
- (void)addPlaceholderLifecycleObserver:(id)arg1;
- (id)init;
- (id)initWithAppLibrary:(id)arg1 splashBoardController:(id)arg2;
- (id)placeholders;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)removeApplicationLifecycleObserver:(id)arg1;
- (void)removePlaceholderLifecycleObserver:(id)arg1;
- (id)suspendCalloutsAssertionWithReason:(id)arg1;

@end
