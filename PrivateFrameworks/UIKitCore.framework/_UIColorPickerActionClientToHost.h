
@interface _UIColorPickerActionClientToHost : _UISceneHostingActionClientToHost

+ (id)_actionForActionType:(long long)arg1;
+ (id)actionForColorPickerDidDismissEyedropper;
+ (id)actionForColorPickerDidFinish;
+ (id)actionForColorPickerDidFloatEyedropper;
+ (id)actionForColorPickerDidSelectColor:(id)arg1 colorSpace:(id)arg2 isVolatile:(bool)arg3;
+ (id)actionForColorPickerDidShowEyedropper;

- (void)performActionForSceneController:(id)arg1;

@end
