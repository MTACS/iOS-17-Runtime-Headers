
@interface TRIExperimentDeployment : NSObject <NSCopying, NSSecureCoding> {
    int  _deploymentId;
    NSString * _experimentId;
}

@property (nonatomic, readonly) int deploymentId;
@property (nonatomic, readonly) NSString *experimentId;
@property (readonly) NSString *shortDesc;

// Image: /System/Library/PrivateFrameworks/Trial.framework/Trial

+ (id)deploymentWithExperimentId:(id)arg1 deploymentId:(int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithReplacementDeploymentId:(int)arg1;
- (id)copyWithReplacementExperimentId:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deploymentId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)experimentId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExperimentId:(id)arg1 deploymentId:(int)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDeployment:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer

- (bool)hasDeploymentId;
- (id)shortDesc;
- (id)taskTag;

@end
