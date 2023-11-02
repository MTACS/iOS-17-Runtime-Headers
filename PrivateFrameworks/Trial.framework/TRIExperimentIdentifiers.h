
@interface TRIExperimentIdentifiers : NSObject <NSCopying> {
    int  _deploymentId;
    NSString * _experimentId;
    NSString * _treatmentId;
}

@property (nonatomic, readonly) int deploymentId;
@property (nonatomic, readonly) NSString *experimentId;
@property (nonatomic, readonly) NSString *treatmentId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deploymentId;
- (id)description;
- (id)experimentId;
- (unsigned long long)hash;
- (id)initWithExperimentId:(id)arg1 deploymentId:(int)arg2 treatmentId:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToExperimentIdentifiers:(id)arg1;
- (id)treatmentId;

@end
