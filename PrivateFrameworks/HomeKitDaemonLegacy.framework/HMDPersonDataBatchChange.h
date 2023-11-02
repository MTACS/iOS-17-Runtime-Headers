
@interface HMDPersonDataBatchChange : HMFObject <HMFLogging> {
    NSUUID * _UUID;
    HMBLocalZoneLocalInput * _localInput;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMBLocalZoneLocalInput *localInput;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)UUID;
- (void)addOrUpdateFaceCrop:(id)arg1;
- (void)addOrUpdatePerson:(id)arg1;
- (id)attributeDescriptions;
- (void)commit;
- (id)initWithLocalInput:(id)arg1;
- (id)localInput;
- (id)logIdentifier;
- (void)removeFaceCropWithUUID:(id)arg1;
- (void)removePersonWithUUID:(id)arg1;

@end
