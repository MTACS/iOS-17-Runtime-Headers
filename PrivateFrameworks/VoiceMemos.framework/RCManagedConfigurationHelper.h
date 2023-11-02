
@interface RCManagedConfigurationHelper : NSObject <MCProfileConnectionObserver> {
    <RCManagedConfigurationHelperDelegate> * _delegate;
    bool  _observing;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RCManagedConfigurationHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)cloudSyncIsAllowed;

- (void).cxx_destruct;
- (void)_notifyDelegateOfChange;
- (void)_startObserving;
- (void)_stopObserving;
- (void)dealloc;
- (id)delegate;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
