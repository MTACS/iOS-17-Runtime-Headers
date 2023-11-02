
@interface CNMemojiBackgroundColor : NSObject {
    double  _alpha;
    double  _blue;
    double  _green;
    double  _red;
}

@property (nonatomic) double alpha;
@property (nonatomic) double blue;
@property (nonatomic) double green;
@property (nonatomic) double red;

+ (id)log;

- (double)alpha;
- (double)blue;
- (double)green;
- (id)initWithColorDescription:(id)arg1;
- (id)initWithColorDescription:(id)arg1 alpha:(double)arg2;
- (id)initWithDefaultColorWithAlpha:(double)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (double)red;
- (void)setAlpha:(double)arg1;
- (void)setBlue:(double)arg1;
- (void)setGreen:(double)arg1;
- (void)setRed:(double)arg1;

@end
