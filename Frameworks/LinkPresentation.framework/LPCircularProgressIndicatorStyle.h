
@interface LPCircularProgressIndicatorStyle : NSObject {
    UIColor * _borderColor;
    double  _borderWidth;
    UIColor * _fillColor;
}

@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic, retain) UIColor *fillColor;

- (void).cxx_destruct;
- (id)borderColor;
- (double)borderWidth;
- (id)fillColor;
- (id)initWithPlatform:(long long)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setFillColor:(id)arg1;

@end
