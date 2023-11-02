
@protocol SXDarkModePolicyException <NSObject>

@optional

- (long long)shouldApplyDarkModeToBackgroundColorsOfComponentTextStyle:(id <SXComponentTextStyle>)arg1 component:(id <SXComponent>)arg2 DOM:(SXDOM *)arg3;
- (long long)shouldApplyDarkModeToBackgroundColorsOfTextStyle:(id <SXTextStyle>)arg1 component:(id <SXComponent>)arg2 DOM:(SXDOM *)arg3;
- (long long)shouldApplyDarkModeToComponent:(id <SXComponent>)arg1 DOM:(SXDOM *)arg2;
- (long long)shouldApplyDarkModeToComponentStyle:(id <SXComponentStyle>)arg1 component:(id <SXComponent>)arg2 DOM:(SXDOM *)arg3;
- (long long)shouldApplyDarkModeToComponentStylesForComponent:(id <SXComponent>)arg1 DOM:(SXDOM *)arg2;
- (long long)shouldApplyDarkModeToDocumentStyle:(id <SXDocumentStyle>)arg1 DOM:(SXDOM *)arg2;
- (long long)shouldApplyDarkModeToForegroundColorsOfComponentTextStyle:(id <SXComponentTextStyle>)arg1 component:(id <SXComponent>)arg2 DOM:(SXDOM *)arg3;
- (long long)shouldApplyDarkModeToForegroundColorsOfTextStyle:(id <SXTextStyle>)arg1 component:(id <SXComponent>)arg2 DOM:(SXDOM *)arg3;
- (long long)shouldApplyDarkModeToTextStyleBackgroundColorsForComponent:(id <SXComponent>)arg1 DOM:(SXDOM *)arg2;
- (long long)shouldApplyDarkModeToTextStyleForegroundColorsForComponent:(id <SXComponent>)arg1 DOM:(SXDOM *)arg2;

@end
