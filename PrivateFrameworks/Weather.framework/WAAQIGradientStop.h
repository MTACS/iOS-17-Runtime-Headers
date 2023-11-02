
@interface WAAQIGradientStop : NSObject {
    UIColor * _color;
    float  _location;
}

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) float location;

+ (id)gradientStopWithColor:(id)arg1 location:(float)arg2;

- (void).cxx_destruct;
- (id)color;
- (id)initWithColor:(id)arg1 location:(float)arg2;
- (float)location;

@end
