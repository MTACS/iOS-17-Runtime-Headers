
@interface NWKUIColorIndex : NSObject {
    UIColor * _color;
    double  _value;
}

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) double value;

+ (id)colorForValue:(double)arg1;
+ (id)indexForValue:(double)arg1;
+ (id)indexWithValue:(double)arg1 color:(id)arg2;
+ (id)zeroIndex;

- (void).cxx_destruct;
- (id)color;
- (id)initWithValue:(double)arg1 color:(id)arg2;
- (bool)isEqual:(id)arg1;
- (double)value;

@end
