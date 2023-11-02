
@protocol SXActionActivityProvider <NSObject>

@optional

- (<SXActionActivityGroup> *)activityGroupForAction:(id <SXAction>)arg1;
- (<SXActionActivityGroup> *)activityGroupForAction:(id <SXAction>)arg1 sourceView:(UIView *)arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (<SXActionPreviewActivity> *)previewActivityForAction:(id <SXAction>)arg1;
- (<SXActionPreviewActivity> *)previewActivityForAction:(id <SXAction>)arg1 sourceView:(UIView *)arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
