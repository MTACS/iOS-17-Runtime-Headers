
@interface HKMultiGradientFillColor : NSObject {
    UIColor * _color;
    NSNumber * _location;
}

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) NSNumber *location;

- (void).cxx_destruct;
- (id)color;
- (id)initWithColor:(id)arg1 location:(id)arg2;
- (id)location;

@end
