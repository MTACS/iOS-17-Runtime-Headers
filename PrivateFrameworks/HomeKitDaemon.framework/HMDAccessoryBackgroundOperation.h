
@interface HMDAccessoryBackgroundOperation : HMDBackgroundOperation <HMFLogging>

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSUUID *accessoryUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *homeUUID;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (bool)persistent;

- (id)accessoryIdentifier;
- (unsigned long long)accessoryOperationStatus;
- (id)accessoryUUID;
- (id)attributeDescriptions;
- (id)homeUUID;
- (id)initWithAccessory:(id)arg1 userData:(id)arg2;
- (id)initWithAccessoryUUID:(id)arg1 accessoryIdentifier:(id)arg2 homeUUIDWhereAccessoryWasPaired:(id)arg3 userData:(id)arg4;
- (bool)isAccessoryOperation;
- (id)logIdentifier;

@end
