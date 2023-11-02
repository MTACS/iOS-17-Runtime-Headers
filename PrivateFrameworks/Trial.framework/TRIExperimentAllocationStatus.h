
@interface TRIExperimentAllocationStatus : TRIAllocationStatus {
    int  _deploymentId;
    NSString * _experimentId;
    NSArray * _namespaces;
    NSString * _treatmentId;
}

@property (nonatomic, readonly) int deploymentId;
@property (nonatomic, readonly) NSString *experimentId;
@property (nonatomic, readonly) NSArray *namespaces;
@property (nonatomic, readonly) NSString *treatmentId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)deploymentId;
- (void)encodeWithCoder:(id)arg1;
- (id)experimentId;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned char)arg1 date:(id)arg2 experimentId:(id)arg3 deploymentId:(int)arg4 treatmentId:(id)arg5;
- (id)initWithType:(unsigned char)arg1 date:(id)arg2 experimentId:(id)arg3 deploymentId:(int)arg4 treatmentId:(id)arg5 namespaces:(id)arg6;
- (bool)isEqualToStatus:(id)arg1;
- (id)namespaces;
- (id)treatmentId;

@end
