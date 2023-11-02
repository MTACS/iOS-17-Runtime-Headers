
@protocol UIPrintOptionViewDelegate

@required

- (UIView *)printOptionDetailView;
- (UIPrintPanelViewController *)printPanelViewController;
- (NSString *)title;

@end
