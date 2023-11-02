
@interface LPVideoPlayButtonStyle : NSObject {
    LPSize * _backgroundSize;
    UIColor * _color;
    double  _disabledOpacity;
    LPSize * _size;
}

@property (nonatomic, retain) LPSize *backgroundSize;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) double disabledOpacity;
@property (nonatomic, retain) LPSize *size;

- (void).cxx_destruct;
- (id)backgroundSize;
- (id)color;
- (double)disabledOpacity;
- (id)initWithPlatform:(long long)arg1;
- (void)setBackgroundSize:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setDisabledOpacity:(double)arg1;
- (void)setSize:(id)arg1;
- (id)size;

@end
