
@interface WFComposeViewSizing : NSObject

+ (double)constrainMaximumContentWidth:(double)arg1 toSize:(struct CGSize { double x1; double x2; })arg2 traitCollection:(id)arg3;
+ (struct CGSize { double x1; double x2; })drawerSizeFromParentSize:(struct CGSize { double x1; double x2; })arg1 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 traitCollection:(id)arg3;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })moduleHorizontalInsetWithTraitCollection:(id)arg1 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
+ (double)moduleWidthForViewSize:(struct CGSize { double x1; double x2; })arg1 maximumContentWidth:(double)arg2 maximumModuleWidth:(double)arg3 traitCollection:(id)arg4 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5;
+ (struct CGSize { double x1; double x2; })sizeForRequestType:(unsigned long long)arg1 parentSize:(struct CGSize { double x1; double x2; })arg2 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 traitCollection:(id)arg4;
+ (struct CGSize { double x1; double x2; })workflowViewSizeFromParentSize:(struct CGSize { double x1; double x2; })arg1 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 traitCollection:(id)arg3;

@end
