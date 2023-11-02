
@interface UIKBGradient : NSObject <NSCopying> {
    NSArray * _colors;
    bool  _didQueryRGBColors;
    NSString * _endColorName;
    NSString * _flatColorName;
    NSString * _gradientName;
    bool  _horizontal;
    NSArray * _middleLocations;
    double  _opacity;
    NSString * _startColorName;
    bool  _usesRGBColors;
}

@property (nonatomic, readonly) NSString *flatColorName;
@property (nonatomic) bool horizontal;
@property (nonatomic) double opacity;
@property (nonatomic, readonly) bool usesRGBColors;

+ (id)gradientWith3Colors:(id)arg1 middleLocation:(double)arg2;
+ (id)gradientWithColors:(id)arg1 middleLocations:(id)arg2;
+ (id)gradientWithFlatColor:(id)arg1;
+ (id)gradientWithName:(id)arg1;
+ (id)gradientWithStartColor:(id)arg1 endColor:(id)arg2;

- (void).cxx_destruct;
- (struct CGGradient { }*)CGGradient;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)flatColorName;
- (bool)horizontal;
- (id)initWith3Colors:(id)arg1 middleLocation:(double)arg2;
- (id)initWithColors:(id)arg1 middleLocations:(id)arg2;
- (id)initWithFlatColor:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2;
- (bool)isEqual:(id)arg1;
- (double)opacity;
- (void)setHorizontal:(bool)arg1;
- (void)setOpacity:(double)arg1;
- (bool)usesRGBColors;

@end
