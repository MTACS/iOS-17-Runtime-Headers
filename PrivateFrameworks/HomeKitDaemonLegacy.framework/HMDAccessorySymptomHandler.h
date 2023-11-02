
@interface HMDAccessorySymptomHandler : HMFObject <HMDAccessorySymptomsDelegate, HMFLogging, HMFMessageReceiver, NSSecureCoding> {
    HMDAccessory * _accessory;
    NSUUID * _accessoryUUID;
    HMFMessageDispatcher * _msgDispatcher;
    NSUUID * _sfDeviceIdentifier;
    HMDSymptomManager * _symptomManager;
    NSSet * _symptoms;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (nonatomic, readonly, copy) NSUUID *accessoryUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) NSUUID *sfDeviceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMDSymptomManager *symptomManager;
@property (nonatomic, copy) NSSet *symptoms;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_filteredSymptomsForSymptoms:(id)arg1;
- (void)_handleFixErrorMessage:(id)arg1;
- (bool)_isWiFiMismatchSymptomCausedByWACPairingInHome:(id)arg1;
- (bool)_isWiFiMismatchSymptomCausedByWirelessCarPlay:(id)arg1;
- (void)_registerMessages;
- (void)_sendStatusUpdate;
- (bool)_shouldFilterWiFiMismatchSymptom:(id)arg1;
- (void)_updateFrameworkClients;
- (void)_updateStateWithNewSFDeviceIdentifier:(id)arg1;
- (void)_updateStateWithNewSymptoms:(id)arg1;
- (id)accessory;
- (id)accessoryUUID;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)handleAccessoryDeviceUpdated;
- (id)initWithAccessory:(id)arg1 symptoms:(id)arg2;
- (id)initWithAccessory:(id)arg1 symptoms:(id)arg2 symptomManager:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (void)setMsgDispatcher:(id)arg1;
- (void)setSfDeviceIdentifier:(id)arg1;
- (void)setSymptoms:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)sfDeviceIdentifier;
- (id)symptomManager;
- (void)symptomManager:(id)arg1 didChangeSFDeviceIdentifier:(id)arg2;
- (void)symptomManager:(id)arg1 didChangeSymptoms:(id)arg2;
- (id)symptoms;
- (void)updateSymptoms:(id)arg1;
- (id)uuid;
- (id)workQueue;

@end
