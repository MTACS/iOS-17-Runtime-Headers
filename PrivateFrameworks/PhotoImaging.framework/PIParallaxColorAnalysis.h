
@interface PIParallaxColorAnalysis : NSObject {
    NSArray * _backgroundColors;
    double  _backgroundLuminance;
    NSArray * _clockAreaColors;
    NSArray * _colors;
    NSArray * _foregroundColors;
    double  _foregroundLuminance;
    double  _luminance;
    long long  _version;
}

@property (nonatomic, copy) NSArray *backgroundColors;
@property (nonatomic) double backgroundLuminance;
@property (nonatomic, copy) NSArray *clockAreaColors;
@property (nonatomic, copy) NSArray *colors;
@property (nonatomic, copy) NSArray *foregroundColors;
@property (nonatomic) double foregroundLuminance;
@property (nonatomic) double luminance;
@property (nonatomic) long long version;

+ (id)colorsFromDictionary:(id)arg1 key:(id)arg2 error:(out id*)arg3;
+ (long long)currentVersion;
+ (id)loadFromContentsDictionary:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (id)backgroundColors;
- (double)backgroundLuminance;
- (id)clockAreaColors;
- (id)colors;
- (id)contentsDictionary;
- (id)foregroundColors;
- (double)foregroundLuminance;
- (id)init;
- (double)luminance;
- (void)setBackgroundColors:(id)arg1;
- (void)setBackgroundLuminance:(double)arg1;
- (void)setClockAreaColors:(id)arg1;
- (void)setColors:(id)arg1;
- (void)setForegroundColors:(id)arg1;
- (void)setForegroundLuminance:(double)arg1;
- (void)setLuminance:(double)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;

@end
