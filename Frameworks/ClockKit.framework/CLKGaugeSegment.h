
@interface CLKGaugeSegment : NSObject {
    UIColor * _color;
    long long  _state;
}

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)color;
- (id)initWithColor:(id)arg1 state:(long long)arg2;
- (void)setState:(long long)arg1;
- (long long)state;

@end
