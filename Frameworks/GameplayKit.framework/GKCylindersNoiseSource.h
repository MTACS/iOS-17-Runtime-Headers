
@interface GKCylindersNoiseSource : GKNoiseSource {
    double  _frequency;
}

@property (nonatomic) double frequency;

+ (id)cylindersNoiseWithFrequency:(double)arg1;

- (id)cloneModule;
- (double)frequency;
- (id)init;
- (id)initWithFrequency:(double)arg1;
- (void)setFrequency:(double)arg1;
- (double)valueAt;

@end
