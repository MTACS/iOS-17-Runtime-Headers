
@protocol SXDarkModePolicyHandler <NSObject>

@required

- (bool)shouldApplyDarkModeToBackgroundColorsOfComponentTextStyle:(id <SXComponentTextStyle>)arg1 component:(id <SXComponent>)arg2 DOM:(SXDOM *)arg3;
- (bool)shouldApplyDarkModeToBackgroundColorsOfTextStyle:(id <SXTextStyle>)arg1 component:(id <SXComponent>)arg2 DOM:(SXDOM *)arg3;
- (bool)shouldApplyDarkModeToComponent:(id <SXComponent>)arg1 DOM:(SXDOM *)arg2;
- (bool)shouldApplyDarkModeToComponentStyle:(id <SXComponentStyle>)arg1 component:(id <SXComponent>)arg2 DOM:(SXDOM *)arg3;
- (bool)shouldApplyDarkModeToComponentStylesForComponent:(id <SXComponent>)arg1 DOM:(SXDOM *)arg2;
- (bool)shouldApplyDarkModeToDOM:(SXDOM *)arg1 layoutOptions:(SXLayoutOptions *)arg2;
- (bool)shouldApplyDarkModeToDocumentStyle:(id <SXDocumentStyle>)arg1 DOM:(SXDOM *)arg2 layoutOptions:(SXLayoutOptions *)arg3;
- (bool)shouldApplyDarkModeToForegroundColorsOfComponentTextStyle:(id <SXComponentTextStyle>)arg1 component:(id <SXComponent>)arg2 DOM:(SXDOM *)arg3;
- (bool)shouldApplyDarkModeToForegroundColorsOfTextStyle:(id <SXTextStyle>)arg1 component:(id <SXComponent>)arg2 DOM:(SXDOM *)arg3;
- (bool)shouldApplyDarkModeToTextStyleBackgroundColorsForComponent:(id <SXComponent>)arg1 DOM:(SXDOM *)arg2;
- (bool)shouldApplyDarkModeToTextStyleForegroundColorsForComponent:(id <SXComponent>)arg1 DOM:(SXDOM *)arg2;

@end
