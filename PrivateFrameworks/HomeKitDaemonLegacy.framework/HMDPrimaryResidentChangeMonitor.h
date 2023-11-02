
@interface HMDPrimaryResidentChangeMonitor : HMFObject <HMFLogging> {
    NSUUID * _confirmedPrimaryResidentDeviceIdentifier;
    <HMDPrimaryResidentChangeMonitorDataSource> * _dataSource;
    bool  _hasResidentDevices;
    NSUUID * _identifier;
    bool  _isCurrentDevicePrimaryResident;
    NSNotificationCenter * _notificationCenter;
}

@property (copy) NSUUID *confirmedPrimaryResidentDeviceIdentifier;
@property <HMDPrimaryResidentChangeMonitorDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool hasResidentDevices;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property bool isCurrentDevicePrimaryResident;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configureWithHome:(id)arg1;
- (id)confirmedPrimaryResidentDevice;
- (id)confirmedPrimaryResidentDeviceIdentifier;
- (id)dataSource;
- (bool)dataSourceHasResidentDevices;
- (void)handlePrimaryResidentChangedNotification:(id)arg1;
- (bool)hasResidentDevices;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 notificationCenter:(id)arg2;
- (bool)isCurrentDevicePrimaryResident;
- (id)logIdentifier;
- (id)notificationCenter;
- (void)notifyChangeToConfirmedPrimaryResidentDeviceIdentifier;
- (void)notifyChangeToHasResidentDevices;
- (void)notifyChangeToIsCurrentPrimaryResident;
- (void)refreshConfirmedPrimaryResidentDeviceIdentifierWithDevice:(id)arg1;
- (void)refreshCurrentDevicePrimaryResidentWithDevice:(id)arg1;
- (void)refreshHasResidentDevices;
- (void)refreshMonitor;
- (void)registerForNotificationsWithHome:(id)arg1;
- (void)setConfirmedPrimaryResidentDeviceIdentifier:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setHasResidentDevices:(bool)arg1;
- (void)setIsCurrentDevicePrimaryResident:(bool)arg1;

@end
