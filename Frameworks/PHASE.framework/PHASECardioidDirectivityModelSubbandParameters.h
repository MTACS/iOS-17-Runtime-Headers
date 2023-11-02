
@interface PHASECardioidDirectivityModelSubbandParameters : NSObject {
    double  _frequency;
    double  _pattern;
    double  _sharpness;
}

@property (nonatomic) double frequency;
@property (nonatomic) double pattern;
@property (nonatomic) double sharpness;

- (double)frequency;
- (id)init;
- (double)pattern;
- (void)setFrequency:(double)arg1;
- (void)setPattern:(double)arg1;
- (void)setSharpness:(double)arg1;
- (double)sharpness;

@end
