
@interface SXStrokeStyle : SXJSONObject

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) int style;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } width;

- (int)styleWithValue:(id)arg1 withType:(int)arg2;

@end
