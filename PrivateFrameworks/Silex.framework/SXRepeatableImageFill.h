
@interface SXRepeatableImageFill : SXFill

@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } height;
@property (nonatomic, readonly) NSString *imageIdentifier;
@property (nonatomic, readonly) unsigned long long repeat;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } width;

- (unsigned long long)repeatWithValue:(id)arg1 withType:(int)arg2;

@end
