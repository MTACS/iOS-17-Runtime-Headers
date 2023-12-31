
@interface SXDataTableRowStyle : SXDataTableElementStyle

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) SXJSONArray *conditional;
@property (nonatomic, readonly) SXDataTableBorder *divider;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } height;
@property (nonatomic, readonly) SXJSONArray *selectors;

+ (id /* block */)valueClassBlockForPropertyWithName:(id)arg1;

@end
