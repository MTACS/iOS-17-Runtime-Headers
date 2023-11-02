
@interface HMPersonSettingsManager : NSObject <HMFLogging> {
    NSUUID * _UUID;
    _HMContext * _context;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMFMessageDestination *messageDestination;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)personSettingsManagerUUIDFromHomeUUID:(id)arg1;

- (void).cxx_destruct;
- (id)UUID;
- (void)_sendMessageWithName:(id)arg1 payload:(id)arg2 responseHandler:(id /* block */)arg3;
- (id)context;
- (void)fetchClassificationNotificationsEnabledForPersonWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithContext:(id)arg1 UUID:(id)arg2;
- (id)initWithHome:(id)arg1;
- (id)logIdentifier;
- (id)messageDestination;
- (void)updateClassificationNotificationsEnabled:(bool)arg1 forPersonWithUUID:(id)arg2 completion:(id /* block */)arg3;

@end
