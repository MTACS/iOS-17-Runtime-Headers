
@interface AVTAvatarAttributeEditorLayoutProvider : NSObject

+ (id)actionsToEditorTransitionStartingLayoutInContainerOfSize:(struct CGSize { double x1; double x2; })arg1 attributesContentViewExtraHeight:(double)arg2 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 userInfoViewHeight:(double)arg4 RTL:(bool)arg5 avatarViewStartFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 avatarViewAlpha:(double)arg7 environment:(id)arg8;
+ (id)defaultLayoutInContainerOfSize:(struct CGSize { double x1; double x2; })arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 userInfoViewHeight:(double)arg3 RTL:(bool)arg4 environment:(id)arg5;
+ (id)defaultLayoutInContainerOfSize:(struct CGSize { double x1; double x2; })arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 userInfoViewHeight:(double)arg3 RTL:(bool)arg4 environment:(id)arg5 maxGroupLabelWidth:(double)arg6;
+ (id)editorToActionsTransitionStartingLayoutInContainerOfSize:(struct CGSize { double x1; double x2; })arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 userInfoViewHeight:(double)arg3 RTL:(bool)arg4 environment:(id)arg5;
+ (bool)shouldShowSideGroupPickerForContainerSize:(struct CGSize { double x1; double x2; })arg1 forEnvironment:(id)arg2;

@end
