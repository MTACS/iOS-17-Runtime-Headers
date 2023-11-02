
@interface NightingaleTelemetryIdentifiers : NSObject <NSCopying> {
    int  _deploymentId;
    NSString * _experimentId;
    NSString * _reachId;
    NSString * _treatmentId;
}

@property (nonatomic, readonly) int deploymentId;
@property (nonatomic, readonly) NSString *experimentId;
@property (nonatomic, readonly) NSString *reachId;
@property (nonatomic, readonly) NSString *treatmentId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deploymentId;
- (id)description;
- (id)experimentId;
- (unsigned long long)hash;
- (id)initWithExperimentId:(id)arg1 treatmentId:(id)arg2 deploymentId:(int)arg3 reachId:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToExperimentIdentifiers:(id)arg1;
- (id)reachId;
- (id)treatmentId;

@end
