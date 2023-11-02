
@interface HMBCloudZoneRebuilderModel : HMBModel

@property (nonatomic, retain) NSNumber *hasCompleted;
@property (nonatomic, retain) NSUUID *uniqueToken;

+ (id)hmbProperties;
+ (id)sentinelUUID;

- (id)init;

@end
