
@protocol PKDashboardDelegate <NSObject>

@required

- (void)contentDidScroll;
- (struct CGPoint { double x1; double x2; })preferredContentOffset;
- (bool)shouldOverrideContentOffset;

@end
