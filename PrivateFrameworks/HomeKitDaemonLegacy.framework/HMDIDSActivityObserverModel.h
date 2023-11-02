
@interface HMDIDSActivityObserverModel : HMBModel

@property (nonatomic, retain) NSData *pushToken;

+ (id)hmbProperties;
+ (id)sentinelParentUUID;

- (id)initWithModelID:(id)arg1;

@end
