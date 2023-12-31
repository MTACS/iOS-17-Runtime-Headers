
@protocol CPBarButtonProviding <NSObject>

@required

- (CPBarButton *)backButton;
- (NSArray *)leadingNavigationBarButtons;
- (void)setBackButton:(CPBarButton *)arg1;
- (void)setLeadingNavigationBarButtons:(NSArray *)arg1;
- (void)setTrailingNavigationBarButtons:(NSArray *)arg1;
- (NSArray *)trailingNavigationBarButtons;

@end
