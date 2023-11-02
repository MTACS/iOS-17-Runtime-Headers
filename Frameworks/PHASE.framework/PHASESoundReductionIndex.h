
@interface PHASESoundReductionIndex : NSObject {
    NSArray * _attenuationCoefficients;
    float  _measuredDepth;
}

@property (nonatomic, readonly) NSArray *attenuationCoefficients;
@property (nonatomic, readonly) float measuredDepth;

+ (id)new;
+ (id)objectForDefault;

- (void).cxx_destruct;
- (id)attenuationCoefficients;
- (id)init;
- (id)initWithAttenuationCoefficients:(id)arg1 measuredDepth:(float)arg2;
- (id)initWithSoundReductionIndices:(id)arg1 frequencyBands:(id)arg2 measuredDepth:(float)arg3;
- (float)measuredDepth;

@end
