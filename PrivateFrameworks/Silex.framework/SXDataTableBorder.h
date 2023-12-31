
@interface SXDataTableBorder : SXJSONObject {
    double  _width;
    SXUnitConverter * unitConverter;
}

@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } actualWidth;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, retain) SXUnitConverter *unitConverter;
@property (nonatomic, readonly) double width;

+ (id)jsonPropertyNameForObjCPropertyName:(id)arg1;

- (void).cxx_destruct;
- (void)setUnitConverter:(id)arg1;
- (id)unitConverter;
- (double)width;

@end
