
@interface SLUresMitigatorResult : NSObject {
    NSString * _assetVersion;
    double  _decisionLevel;
    NSDictionary * _detailedResult;
    bool  _didMitigate;
    NSDictionary * _extractedFeats;
    float  _score;
    float  _threshold;
}

@property (nonatomic, readonly) NSString *assetVersion;
@property (nonatomic, readonly) double decisionLevel;
@property (nonatomic, readonly) NSDictionary *detailedResult;
@property (nonatomic, readonly) bool didMitigate;
@property (nonatomic, readonly) NSDictionary *extractedFeats;
@property (nonatomic, readonly) float score;
@property (nonatomic, readonly) float threshold;

- (void).cxx_destruct;
- (id)assetVersion;
- (double)decisionLevel;
- (id)detailedResult;
- (bool)didMitigate;
- (id)extractedFeats;
- (id)initWithScore:(float)arg1 decision:(bool)arg2 decisionLevel:(double)arg3 detailedResults:(id)arg4 extractedFeats:(id)arg5;
- (float)score;
- (float)threshold;

@end
