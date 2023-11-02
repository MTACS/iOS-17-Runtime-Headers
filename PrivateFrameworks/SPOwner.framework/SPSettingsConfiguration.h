
@interface SPSettingsConfiguration : NSObject <SPFMIPRegisterInfo, SPSettingsConfigurating> {
    NSOperationQueue * _notificationQueue;
    <SPBeaconManagerXPCProtocol> * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
    FMXPCServiceDescription * _serviceDescription;
    NSSet * _serviceDisabledReasons;
    id  _serviceSettingsChangedNotificationToken;
    NSString * _serviceState;
    FMXPCSession * _session;
    NSUserDefaults * _sharedDefaults;
    <SPBeaconManagerXPCProtocol> * _userAgentProxy;
}

@property (nonatomic, readonly, copy) NSUUID *baUUID;
@property (nonatomic, readonly, copy) NSDate *beaconZoneCreationDate;
@property (nonatomic, readonly, copy) NSNumber *beaconZoneCreationErrorCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *lastKeyRollDate;
@property (nonatomic, retain) NSOperationQueue *notificationQueue;
@property (nonatomic, retain) <SPBeaconManagerXPCProtocol> *proxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) FMXPCServiceDescription *serviceDescription;
@property (nonatomic, readonly, copy) NSSet *serviceDisabledReasons;
@property (nonatomic, copy) NSSet *serviceDisabledReasons;
@property (nonatomic) id serviceSettingsChangedNotificationToken;
@property (nonatomic, readonly, copy) NSString *serviceState;
@property (nonatomic, copy) NSString *serviceState;
@property (nonatomic, retain) FMXPCSession *session;
@property (nonatomic, retain) NSUserDefaults *sharedDefaults;
@property (readonly) Class superclass;
@property (nonatomic, retain) <SPBeaconManagerXPCProtocol> *userAgentProxy;

- (void).cxx_destruct;
- (void)_invalidate;
- (id)baUUID;
- (id)beaconZoneCreationDate;
- (id)beaconZoneCreationErrorCode;
- (void)beginRefreshingServiceStateWithBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (id)lastKeyRollDate;
- (id)notificationQueue;
- (id)proxy;
- (id)queue;
- (id)serviceDescription;
- (id)serviceDisabledReasons;
- (id)serviceSettingsChangedNotificationToken;
- (id)serviceSettingsConfiguration;
- (id)serviceState;
- (id)session;
- (void)setNotificationQueue:(id)arg1;
- (void)setProxy:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServiceDescription:(id)arg1;
- (void)setServiceDisabledReasons:(id)arg1;
- (void)setServiceSettingsChangedNotificationToken:(id)arg1;
- (void)setServiceState:(id)arg1;
- (void)setServiceState:(id)arg1 completion:(id /* block */)arg2;
- (void)setSession:(id)arg1;
- (void)setSharedDefaults:(id)arg1;
- (void)setUserAgentProxy:(id)arg1;
- (id)sharedDefaults;
- (id)userAgentProxy;

@end
