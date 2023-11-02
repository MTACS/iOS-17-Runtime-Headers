
@interface TRIBackgroundMLTaskIdentifiers : NSObject <NSCopying> {
    NSString * _bmltTaskId;
    int  _deploymentId;
    NSString * _factorPackId;
    NSString * _treatmentId;
}

@property (nonatomic, readonly) NSString *bmltTaskId;
@property (nonatomic, readonly) int deploymentId;
@property (nonatomic, readonly) NSString *factorPackId;
@property (nonatomic, readonly) NSString *treatmentId;

- (void).cxx_destruct;
- (id)bmltTaskId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deploymentId;
- (id)description;
- (id)factorPackId;
- (unsigned long long)hash;
- (id)initWithBMLTTaskId:(id)arg1 deploymentId:(int)arg2 treatmentId:(id)arg3;
- (id)initWithBMLTaskId:(id)arg1 deploymentId:(int)arg2 factorPackId:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBMLTTaskIdentifiers:(id)arg1;
- (id)treatmentId;

@end
