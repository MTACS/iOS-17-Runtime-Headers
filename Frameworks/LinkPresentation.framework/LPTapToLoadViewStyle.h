
@interface LPTapToLoadViewStyle : NSObject {
    UIColor * _backgroundColor;
    LPTextViewStyle * _caption;
    LPPointUnit * _height;
    UIColor * _tapHighlightColor;
    LPPointUnit * _width;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) LPTextViewStyle *caption;
@property (nonatomic, retain) LPPointUnit *height;
@property (nonatomic, retain) UIColor *tapHighlightColor;
@property (nonatomic, retain) LPPointUnit *width;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)caption;
- (id)height;
- (id)initWithPlatform:(long long)arg1 sizeClass:(unsigned long long)arg2 fontScalingFactor:(double)arg3;
- (void)setBackgroundColor:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setTapHighlightColor:(id)arg1;
- (void)setWidth:(id)arg1;
- (id)tapHighlightColor;
- (id)width;

@end
