
@interface SLProgressiveCheckerResult : NSObject {
    unsigned long long  _analyzedSamples;
    NSArray * _detailedResult;
    unsigned long long  _resultType;
    float  _score;
}

@property (nonatomic, readonly) unsigned long long analyzedSamples;
@property (nonatomic, readonly) NSArray *detailedResult;
@property (nonatomic, readonly) unsigned long long resultType;
@property (nonatomic, readonly) float score;

- (void).cxx_destruct;
- (unsigned long long)analyzedSamples;
- (id)detailedResult;
- (id)initWithScore:(float)arg1 ofType:(unsigned long long)arg2 analyzedSamples:(unsigned long long)arg3 detailedResults:(id)arg4;
- (unsigned long long)resultType;
- (float)score;

@end
