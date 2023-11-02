
@protocol PXStoryDiagnosticHUDContentProvider

@required

- (NSDictionary *)diagnosticErrorsByComponentForHUDType:(long long)arg1;
- (NSString *)diagnosticTextForHUDType:(long long)arg1 displaySize:(struct CGSize { double x1; double x2; })arg2;

@end
