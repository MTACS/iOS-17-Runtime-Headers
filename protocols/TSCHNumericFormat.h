
@protocol TSCHNumericFormat <NSObject>

@required

- (TSKFormat<TSCHNumericFormat> *)chartNumericFormatByApplyingTSCHNumericFormatProperties:(struct TSCHNumericFormatProperties { unsigned long long x1; unsigned char x2; bool x3; })arg1;
- (struct TSCHNumericFormatProperties { unsigned long long x1; unsigned char x2; bool x3; })chartNumericFormatProperties;
- (unsigned long long)decimalPlaces;
- (unsigned char)negativeStyle;
- (bool)showThousandsSeparator;

@end
