
@interface CAActivityIndicatorLayer : CALayer {
    struct CGColor { } * _color;
    long long  _spokeCount;
    long long  _spokeFrameRatio;
    UIColor * _uiColor;
}

@property (getter=_spokeCount, nonatomic, readonly) long long spokeCount;
@property (getter=_spokeFrameRatio, nonatomic, readonly) long long spokeFrameRatio;

- (void).cxx_destruct;
- (double)_alphaValueForStep:(long long)arg1;
- (long long)_spokeCount;
- (long long)_spokeFrameRatio;
- (double)_spokeLengthForGearWidth:(double)arg1;
- (double)_spokeWidthForGearWidth:(double)arg1;
- (double)_widthForGearWidth:(double)arg1;
- (id)imageForStep:(long long)arg1 withColor:(struct CGColor { }*)arg2;
- (id)initWithColor:(id)arg1;
- (bool)isAnimating;
- (id)spinnerImages;
- (void)startAnimating;
- (void)stopAnimating;

@end
