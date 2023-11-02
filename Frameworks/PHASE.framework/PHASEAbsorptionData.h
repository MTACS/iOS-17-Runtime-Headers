
@interface PHASEAbsorptionData : NSObject {
    NSArray * _absorptionCoefficients;
}

@property (nonatomic, readonly) NSArray *absorptionCoefficients;

+ (id)new;
+ (id)objectForDefault;

- (void).cxx_destruct;
- (id)absorptionCoefficients;
- (id)init;
- (id)initWithAbsorptionCoefficients:(id)arg1;
- (id)initWithAbsorptionCoefficients:(id)arg1 frequencyBands:(id)arg2;

@end
