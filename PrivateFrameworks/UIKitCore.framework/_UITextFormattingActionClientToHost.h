
@interface _UITextFormattingActionClientToHost : _UISceneHostingActionClientToHost

+ (id)actionForPresentColorPickerWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selectedColor:(id)arg2;
+ (id)actionForPresentFontPickerWithConfiguration:(id)arg1 selectedFonts:(id)arg2;
+ (id)actionForRequestType:(long long)arg1;
+ (id)actionForUpdateTextAttributesWithData:(id)arg1;

- (void)performActionForSceneController:(id)arg1;

@end
