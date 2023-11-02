
@interface HMDDoorbellPressTracker : HMFObject <HMFLogging> {
    NSMutableDictionary * _dateOfLastDoorbellPressByAccessoryUUID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSNotificationCenter * _notificationCenter;
    NSMutableDictionary * _registrationsByAccessoryUUID;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (retain) NSMutableDictionary *dateOfLastDoorbellPressByAccessoryUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (retain) NSMutableDictionary *registrationsByAccessoryUUID;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleCharacteristicsValueUpdatedNotification:(id)arg1;
- (id)dateOfLastDoorbellPressByAccessoryUUID;
- (bool)doorbellPressInDateInterval:(id)arg1 doorbellAccessory:(id)arg2;
- (void)handleCharacteristicsValueUpdatedNotification:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 notificationCenter:(id)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)notificationCenter;
- (id)registrationsByAccessoryUUID;
- (void)setDateOfLastDoorbellPressByAccessoryUUID:(id)arg1;
- (void)setRegistrationsByAccessoryUUID:(id)arg1;
- (void)startTrackingPressesForDoorbellAccessory:(id)arg1 registration:(id)arg2;
- (void)stopTrackingPressesForDoorbellAccessory:(id)arg1 registration:(id)arg2;
- (id)workQueue;

@end
