
@protocol UIEditMenuInteractionDelegate <NSObject>

@optional

- (UIMenu *)editMenuInteraction:(UIEditMenuInteraction *)arg1 menuForConfiguration:(UIEditMenuConfiguration *)arg2 suggestedActions:(NSArray *)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editMenuInteraction:(UIEditMenuInteraction *)arg1 targetRectForConfiguration:(UIEditMenuConfiguration *)arg2;
- (void)editMenuInteraction:(UIEditMenuInteraction *)arg1 willDismissMenuForConfiguration:(UIEditMenuConfiguration *)arg2 animator:(id <UIEditMenuInteractionAnimating>)arg3;
- (void)editMenuInteraction:(UIEditMenuInteraction *)arg1 willPresentMenuForConfiguration:(UIEditMenuConfiguration *)arg2 animator:(id <UIEditMenuInteractionAnimating>)arg3;

@end
