
@interface CESRAudioSamplingConfig : NSObject {
    NSArray * _samplingPolicies;
}

@property (nonatomic, readonly, copy) NSArray *samplingPolicies;

- (void).cxx_destruct;
- (id)getSamplingRateFromDimension:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithConfigPath:(id)arg1;
- (id)samplingPolicies;

@end
