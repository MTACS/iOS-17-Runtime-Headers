
@interface TVRXManagedConfigManager : NSObject <MCProfileConnectionObserver> {
    NSSet * _allowedDeviceNames;
    NSArray * _allowedTVs;
}

@property (nonatomic, retain) NSSet *allowedDeviceNames;
@property (nonatomic, retain) NSArray *allowedTVs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isManagedConfigProfileInstalled, nonatomic, readonly) bool managedConfigProfileInstalled;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_convertMACAddressesToData:(id)arg1;
- (id)allowedDeviceNames;
- (bool)allowedDeviceWithName:(id)arg1;
- (id)allowedTVs;
- (void)dealloc;
- (id)init;
- (bool)isManagedConfigProfileInstalled;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)refreshState;
- (void)setAllowedDeviceNames:(id)arg1;
- (void)setAllowedTVs:(id)arg1;

@end
