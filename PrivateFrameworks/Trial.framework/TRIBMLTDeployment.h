
@interface TRIBMLTDeployment : NSObject <NSCopying, NSSecureCoding> {
    NSString * _backgroundMLTaskId;
    int  _deploymentId;
}

@property (nonatomic, readonly) NSString *backgroundMLTaskId;
@property (nonatomic, readonly) int deploymentId;
@property (nonatomic, readonly) NSString *shortDesc;

// Image: /System/Library/PrivateFrameworks/Trial.framework/Trial

+ (id)deploymentWithBackgroundMLTaskId:(id)arg1 deploymentId:(int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundMLTaskId;
- (id)copyWithReplacementBackgroundMLTaskId:(id)arg1;
- (id)copyWithReplacementDeploymentId:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deploymentId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDeploymentId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBackgroundMLTaskId:(id)arg1 deploymentId:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDeployment:(id)arg1;
- (id)shortDesc;
- (id)taskTag;

// Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer

- (id)shortDesc;
- (id)taskTag;

@end
