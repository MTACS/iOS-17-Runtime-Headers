
@interface CESRAudioSamplingPolicy : NSObject {
    long long  _numDimension;
    CESRSamplingDimension * _ruleDimension;
    NSNumber * _samplingRate;
}

@property (nonatomic, readonly) long long numDimension;
@property (nonatomic, readonly, copy) CESRSamplingDimension *ruleDimension;
@property (nonatomic, readonly, copy) NSNumber *samplingRate;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRuleDimension:(id)arg1 samplingRate:(id)arg2 numDimension:(long long)arg3;
- (bool)isMatchedSamplingDimension:(id)arg1;
- (long long)numDimension;
- (id)ruleDimension;
- (id)samplingRate;

@end
