
@interface HMUserActionPrediction : NSObject <HFStateDumpBuildable, HMFLogging, HMFObject, NSSecureCoding> {
    double  _predictionScore;
    NSUUID * _predictionTargetUUID;
    unsigned long long  _predictionType;
    unsigned long long  _targetGroupType;
    NSUUID * _targetGroupUUID;
    NSUUID * _targetServiceUUID;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) double predictionScore;
@property (readonly, copy) NSUUID *predictionTargetUUID;
@property (readonly) unsigned long long predictionType;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly) unsigned long long targetGroupType;
@property (readonly, copy) NSUUID *targetGroupUUID;
@property (readonly, copy) NSUUID *targetServiceUUID;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyRemovingGroup;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredictionTargetUUID:(id)arg1 predictionType:(unsigned long long)arg2 predictionScore:(double)arg3;
- (id)initWithPredictionTargetUUID:(id)arg1 targetServiceUUID:(id)arg2 predictionType:(unsigned long long)arg3 predictionScore:(double)arg4;
- (id)initWithPredictionTargetUUID:(id)arg1 targetServiceUUID:(id)arg2 targetGroupUUID:(id)arg3 targetGroupType:(unsigned long long)arg4 predictionType:(unsigned long long)arg5 predictionScore:(double)arg6;
- (id)initWithPredictionTargetUUID:(id)arg1 targetServiceUUID:(id)arg2 targetServiceGroupUUID:(id)arg3 predictionType:(unsigned long long)arg4 predictionScore:(double)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqual:(id)arg1 ignoreScore:(bool)arg2 ignoreGroupProperties:(bool)arg3;
- (bool)isEqualIgnoringScore:(id)arg1;
- (bool)isEqualIgnoringScoreAndGroupProperties:(id)arg1;
- (double)predictionScore;
- (id)predictionTargetUUID;
- (unsigned long long)predictionType;
- (id)privateDescription;
- (id)shortDescription;
- (unsigned long long)targetGroupType;
- (id)targetGroupUUID;
- (id)targetServiceUUID;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
