
@protocol SXComponentInteractionHandler <NSObject>

@required

- (void)handleInteractionType:(unsigned long long)arg1 sourceView:(UIView *)arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@optional

- (UIContextMenuConfiguration *)contextMenuForComponentView:(SXComponentView *)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (NSString *)toolTipForComponentView:(SXComponentView *)arg1;

@end
