
@interface PHASEScatteringData : NSObject {
    NSArray * _scatteringCoefficients;
}

@property (nonatomic, readonly) NSArray *scatteringCoefficients;

+ (id)new;
+ (id)objectForDefault;

- (void).cxx_destruct;
- (id)init;
- (id)initWithScatteringCoefficients:(id)arg1;
- (id)initWithScatteringCoefficients:(id)arg1 frequencyBands:(id)arg2;
- (id)scatteringCoefficients;

@end
