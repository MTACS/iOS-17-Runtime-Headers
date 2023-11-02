
@interface HMPhotosPersonManager : HMPersonManager <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)personManagerUUIDFromUserUUID:(id)arg1;

- (id)initWithContext:(id)arg1 UUID:(id)arg2;
- (id)initWithUser:(id)arg1;
- (id)logIdentifier;

@end
