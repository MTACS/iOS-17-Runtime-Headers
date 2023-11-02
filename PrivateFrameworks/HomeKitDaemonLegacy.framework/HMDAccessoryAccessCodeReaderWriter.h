
@interface HMDAccessoryAccessCodeReaderWriter : HMFObject <HMFLogging> {
    HMDAccessCodeManagerContext * _context;
}

@property (readonly) HMDAccessCodeManagerContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_accessCodeControlFromWriteResponses:(id)arg1 forWriteRequest:(id)arg2;
+ (id)_createListWriteRequestsForCharacteristics:(id)arg1;
+ (id)_createReadWriteRequestsForAccessCodeIdentifiersByCharacteristic:(id)arg1;
+ (id)accessCodeFetchResponsesForReadWriteResponses:(id)arg1 ofWriteRequests:(id)arg2;
+ (id)createConstraintsFromReadResponses:(id)arg1 readRequests:(id)arg2;
+ (id)createModificationResponsesForWriteResponses:(id)arg1 ofRequestPairs:(id)arg2;
+ (id)createWriteRequestForAddRequests:(id)arg1 characteristic:(id)arg2;
+ (id)createWriteRequestForRemoveRequests:(id)arg1 characteristic:(id)arg2;
+ (id)createWriteRequestForUpdateRequests:(id)arg1 characteristic:(id)arg2;
+ (id)createWriteRequestsForModificationRequests:(id)arg1 hapAccessories:(id)arg2;
+ (id)genericModificationResponseForFailedRequest:(id)arg1;
+ (long long)hmPrivateErrorCodeForHAPAccessCodeError:(long long)arg1;
+ (id)identifiersFromListWriteResponses:(id)arg1 ofWriteRequests:(id)arg2;
+ (id)logCategory;
+ (id)modificationResponseForControlResponse:(id)arg1 operationType:(long long)arg2 accessoryUUID:(id)arg3;
+ (id)modificationResponseForFailedMatterRequest:(id)arg1 error:(id)arg2;

- (void).cxx_destruct;
- (id)_characteristicsOfType:(id)arg1 fromAccessoriesWithUUIDs:(id)arg2;
- (id)_createConstraintsReadRequestsForAccessoriesWithUUIDs:(id)arg1;
- (id)_createListWriteRequestsForAccessoriesWithUUIDS:(id)arg1;
- (id)_createModificationResponsesForWriteResponses:(id)arg1 ofRequestPairs:(id)arg2;
- (id)_createReadWriteRequestsForAccessCodeIdentifiers:(id)arg1;
- (id)_createWriteRequestsForModificationRequests:(id)arg1;
- (id)_fetchResponseFromCredentialUserTuples:(id)arg1 accessory:(id)arg2 doorLock:(id)arg3;
- (id)_performReadRequests:(id)arg1 withRetries:(bool)arg2;
- (id)_performWriteRequests:(id)arg1 withRetries:(bool)arg2;
- (id)_readAccessCodeWithIdentifier:(id)arg1 accessoryUUID:(id)arg2;
- (id)_readAccessCodesFromAccessoriesWithUUIDs:(id)arg1 withRetries:(bool)arg2;
- (id)_readAccessCodesFromAccessoriesWithUUIDs_HAP:(id)arg1 withRetries:(bool)arg2;
- (id)_readAccessCodesFromAccessoriesWithUUIDs_Matter:(id)arg1 withRetries:(bool)arg2;
- (id)_readAccessCodesFromAccessory_Matter:(id)arg1 withRetries:(bool)arg2;
- (void)_readConstraintsAndAccessCodesFromAccessoriesWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)_readConstraintsFromAccessoriesWithUUIDs:(id)arg1 withRetries:(bool)arg2;
- (id)_readConstraintsFromAccessoriesWithUUIDs_HAP:(id)arg1 withRetries:(bool)arg2;
- (id)_readConstraintsFromAccessoriesWithUUIDs_Matter:(id)arg1 withRetries:(bool)arg2;
- (id)_readConstraintsFromAccessory_Matter:(id)arg1 withRetries:(bool)arg2;
- (id)context;
- (id)initWithContext:(id)arg1;
- (id)logIdentifier;
- (id)performAccessCodeModificationRequests:(id)arg1 withRetries:(bool)arg2;
- (id)performAccessCodeModificationRequests_HAP:(id)arg1 withRetries:(bool)arg2;
- (id)performAccessCodeModificationRequests_Matter:(id)arg1 withRetries:(bool)arg2;
- (id)performModificationRequest_Matter:(id)arg1;
- (id)readAccessCodeWithIdentifier:(id)arg1 accessoryUUID:(id)arg2;
- (id)readAccessCodesFromAccessoriesWithUUIDs:(id)arg1;
- (void)readConstraintsAndAccessCodesFromAccessoriesWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)readConstraintsFromAccessoriesWithUUIDs:(id)arg1;
- (id)removeAccessCodeWithValue_Matter:(id)arg1 fromAccessory:(id)arg2 withUserUUID:(id)arg3 guestName:(id)arg4;
- (id)removeAllAccessCodesWithValue:(id)arg1 withUserUUID:(id)arg2 guestName:(id)arg3;
- (id)removeAllAccessCodesWithValue_HAP:(id)arg1 withUserUUID:(id)arg2 guestName:(id)arg3;
- (id)removeAllAccessCodesWithValue_Matter:(id)arg1 withUserUUID:(id)arg2 guestName:(id)arg3;

@end
