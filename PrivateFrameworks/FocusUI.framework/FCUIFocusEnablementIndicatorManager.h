
@interface FCUIFocusEnablementIndicatorManager : NSObject <FCActivityManagerObserving> {
    FCActivityManager * _activityManager;
    <FCActivityDescribing> * _lastActiveActivity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lastActiveActivityLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)managerWithBannerPoster:(id)arg1 systemApertureElementRegistrar:(id)arg2;

- (void).cxx_destruct;
- (void)activeActivityDidChangeForManager:(id)arg1;
- (id)init;
- (void)postActivity:(id)arg1 enabled:(bool)arg2;
- (id)postPersistentActivity:(id)arg1 enabled:(bool)arg2 systemApertureElementProvider:(id)arg3;
- (id)postPersistentActivityWithModeIdentifier:(id)arg1 systemApertureElementProvider:(id)arg2;
- (void)revokeWithReason:(id)arg1;
- (bool)shouldKeepPresentingAfterActiveActivityDidChange:(id)arg1;

@end
