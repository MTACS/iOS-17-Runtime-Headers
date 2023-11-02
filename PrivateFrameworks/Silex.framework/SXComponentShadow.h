
@interface SXComponentShadow : SXJSONObject

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) SXConvertiblePoint *offset;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } radius;

@end
