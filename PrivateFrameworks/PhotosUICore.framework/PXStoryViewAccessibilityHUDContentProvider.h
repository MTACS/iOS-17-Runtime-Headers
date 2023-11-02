
@interface PXStoryViewAccessibilityHUDContentProvider : NSObject <PXStoryDiagnosticHUDContentProvider>

- (void)attachToAccessibilityIfNeeded;
- (id)diagnosticErrorsByComponentForHUDType:(long long)arg1;
- (id)diagnosticTextForHUDType:(long long)arg1 displaySize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithViewModel:(id)arg1;

@end
