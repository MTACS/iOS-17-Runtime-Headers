
@interface STManagementStateObserver : NSObject {
    long long  _contactManagementState;
    NSNumber * _dsid;
    STManagementState * _managementState;
    STManagementStateObserver * _me;
    int  _screenTimeSettingsChangeNotifyToken;
    NSObject<OS_dispatch_queue> * _screenTimeSettingsChangeQueue;
}

@property long long contactManagementState;
@property (readonly, copy) NSNumber *dsid;
@property (retain) STManagementState *managementState;
@property (retain) STManagementStateObserver *me;
@property (readonly) int screenTimeSettingsChangeNotifyToken;
@property (readonly) NSObject<OS_dispatch_queue> *screenTimeSettingsChangeQueue;

+ (void)createObserverWithDSID:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_initWithDSID:(id)arg1;
- (void)_screenTimeSettingsDidChange;
- (long long)contactManagementState;
- (void)dealloc;
- (id)dsid;
- (id)managementState;
- (id)me;
- (int)screenTimeSettingsChangeNotifyToken;
- (id)screenTimeSettingsChangeQueue;
- (void)setContactManagementState:(long long)arg1;
- (void)setManagementState:(id)arg1;
- (void)setMe:(id)arg1;

@end
