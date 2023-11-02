
@protocol SXConditionalComponentLayoutProperties <NSObject>

@required

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })columnRange;
- (struct _SXComponentContentInset { bool x1; bool x2; bool x3; bool x4; bool x5; })contentInset;
- (unsigned long long)horizontalContentAlignment;
- (unsigned long long)ignoreDocumentGutter;
- (unsigned long long)ignoreDocumentMargin;
- (unsigned long long)ignoreViewportPadding;
- (<SXEdgeSpacing> *)margin;
- (struct _SXConvertibleValue { double x1; unsigned long long x2; })maximumContentWidth;
- (struct _SXConvertibleValue { double x1; unsigned long long x2; })maximumWidth;
- (struct _SXConvertibleValue { double x1; unsigned long long x2; })minimumHeight;
- (struct _SXConvertibleValue { double x1; unsigned long long x2; })minimumWidth;
- (<SXEdgeSpacing> *)padding;
- (struct _SXConvertibleValue { double x1; unsigned long long x2; })suggestedHeight;

@end