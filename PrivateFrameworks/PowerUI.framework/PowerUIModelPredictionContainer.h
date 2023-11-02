
@interface PowerUIModelPredictionContainer : NSObject {
    double  _engagementConfidence;
    NSString * _modelVersion;
    double  _smartChargeDuration;
    unsigned long long  _state;
}

@property (nonatomic, readonly) double engagementConfidence;
@property (nonatomic, readonly) NSString *modelVersion;
@property (nonatomic, readonly) double smartChargeDuration;
@property (nonatomic, readonly) unsigned long long state;

- (void).cxx_destruct;
- (double)engagementConfidence;
- (id)initInvalidEntry:(unsigned long long)arg1 withEngagementConfidence:(double)arg2 withSmartChargeDuration:(double)arg3 withModelVersion:(id)arg4;
- (id)initWithEngagementConfidence:(double)arg1 withSmartChargeDuration:(double)arg2 withModelVersion:(id)arg3;
- (id)modelVersion;
- (double)smartChargeDuration;
- (unsigned long long)state;

@end
