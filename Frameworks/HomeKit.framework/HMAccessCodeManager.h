
@interface HMAccessCodeManager : NSObject <HMFLogging, HMFMessageReceiver> {
    NSUUID * _UUID;
    _HMContext * _context;
    HMHome * _home;
    struct hmf_unfair_data_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _lock;
    NSNotificationCenter * _notificationCenter;
    NSHashTable * _observers;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSArray *accessoriesSupportingAccessCodes;
@property (readonly) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSHashTable *observers;
@property (readonly) Class superclass;

+ (long long)_accessCodeLengthFromLowerBound:(long long)arg1 upperBound:(long long)arg2;
+ (id)_createAccessCodeWithLength:(long long)arg1;
+ (id)accessCodeConstraints;
+ (id)accessCodeManagerUUIDFromHomeUUID:(id)arg1;
+ (id)convertPotentialUniqueIdentifier:(id)arg1 toUUIDForUserInHome:(id)arg2;
+ (bool)doesAccessCode:(id)arg1 conflictWithExistingAccessCodes:(id)arg2;
+ (id)generateAccessCodeValueFromConstraints:(id)arg1 accessoryAccessCodes:(id)arg2 homeAccessCodes:(id)arg3;
+ (id)generateAccessCodeValueFromConstraints:(id)arg1 existingAccessCodes:(id)arg2;
+ (long long)greatestLowerBoundForAccessCodeLengthFromConstraints:(id)arg1;
+ (bool)isWeakAccessCode:(id)arg1;
+ (long long)leastUpperBoundForAccessCodeLengthFromConstraints:(id)arg1;
+ (id)logCategory;
+ (id)valueObjectsForAccessCodeModificationRequests:(id)arg1 home:(id)arg2;

- (void).cxx_destruct;
- (id)UUID;
- (void)_sendMessageWithName:(id)arg1 payload:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_subscribe;
- (void)_unsubscribe;
- (id)accessoriesSupportingAccessCodes;
- (void)addObserver:(id)arg1;
- (void)configure;
- (id)context;
- (void)fetchAccessCodeConstraintsFromAccessories:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAccessCodesFromAccessories:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchCachedAccessoryAccessCodesWithCompletion:(id /* block */)arg1;
- (void)fetchHomeAccessCodesWithCompletion:(id /* block */)arg1;
- (void)generateAccessCodeForUser:(id)arg1 completion:(id /* block */)arg2;
- (void)handleDaemonReconnectedNotification:(id)arg1;
- (void)handleDidAddAccessoryAccessCodesMessage:(id)arg1;
- (void)handleDidAddHomeAccessCodesMessage:(id)arg1;
- (void)handleDidRemoveAccessoryAccessCodesMessage:(id)arg1;
- (void)handleDidRemoveHomeAccessCodesMessage:(id)arg1;
- (void)handleDidUpdateAccessoryAccessCodesMessage:(id)arg1;
- (void)handleDidUpdateHomeAccessCodesMessage:(id)arg1;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 context:(id)arg2 UUID:(id)arg3 notificationCenter:(id)arg4;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)notificationCenter;
- (id)observers;
- (void)removeHomeAccessCodeWithValue:(id)arg1 completion:(id /* block */)arg2;
- (void)removeObserver:(id)arg1;
- (void)removeSimpleLabelAccessCode:(id)arg1 completion:(id /* block */)arg2;
- (void)resetAccessoryAccessCodesWithValueMatchingHomeAccessCode:(id)arg1 completion:(id /* block */)arg2;
- (void)setAccessCode:(id)arg1 forUser:(id)arg2 completion:(id /* block */)arg3;
- (void)setAccessCode:(id)arg1 forUserWithUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)setUserInformation:(id)arg1 forHomeAccessCodeWithValue:(id)arg2 completion:(id /* block */)arg3;
- (void)submitAccessCodeModificationRequests:(id)arg1 completion:(id /* block */)arg2;

@end
