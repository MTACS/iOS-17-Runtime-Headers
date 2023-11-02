
@interface TRIExperimentHistoryRecord : NSObject <NSCopying, NSSecureCoding> {
    int  _deploymentEnvironment;
    int  _deploymentId;
    NSDate * _eventDate;
    unsigned char  _eventType;
    NSString * _experimentId;
    NSArray * _namespaces;
    NSString * _treatmentId;
}

@property (nonatomic, readonly) int deploymentEnvironment;
@property (nonatomic, readonly) int deploymentId;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) unsigned char eventType;
@property (nonatomic, readonly) NSString *experimentId;
@property (nonatomic, readonly) NSArray *namespaces;
@property (nonatomic, readonly) NSString *treatmentId;

+ (id)recordWithEventDate:(id)arg1 eventType:(unsigned char)arg2 deploymentEnvironment:(int)arg3 experimentId:(id)arg4 deploymentId:(int)arg5 treatmentId:(id)arg6 namespaces:(id)arg7;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithReplacementDeploymentEnvironment:(int)arg1;
- (id)copyWithReplacementDeploymentId:(int)arg1;
- (id)copyWithReplacementEventDate:(id)arg1;
- (id)copyWithReplacementEventType:(unsigned char)arg1;
- (id)copyWithReplacementExperimentId:(id)arg1;
- (id)copyWithReplacementNamespaces:(id)arg1;
- (id)copyWithReplacementTreatmentId:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deploymentEnvironment;
- (int)deploymentId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventDate;
- (unsigned char)eventType;
- (id)experimentId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventDate:(id)arg1 eventType:(unsigned char)arg2 deploymentEnvironment:(int)arg3 experimentId:(id)arg4 deploymentId:(int)arg5 treatmentId:(id)arg6 namespaces:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRecord:(id)arg1;
- (id)namespaces;
- (id)treatmentId;

@end
