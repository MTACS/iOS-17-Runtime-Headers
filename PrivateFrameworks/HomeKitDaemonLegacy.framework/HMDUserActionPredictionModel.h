
@interface HMDUserActionPredictionModel : HMBModel

@property (copy) NSNumber *groupType;
@property (copy) NSNumber *predictionScore;
@property (copy) NSUUID *predictionTargetUUID;
@property (copy) NSUUID *targetGroupUUID;
@property (copy) NSUUID *targetServiceGroupUUID;
@property (copy) NSUUID *targetServiceUUID;
@property (copy) NSNumber *type;

+ (bool)hmbExcludeFromCloudStorage;
+ (id)hmbProperties;

- (id)initWithUserActionPrediction:(id)arg1;
- (id)userActionPrediction;

@end
