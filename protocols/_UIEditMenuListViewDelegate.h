
@protocol _UIEditMenuListViewDelegate

@required

- (void)contentSizeCategoryDidChangeInEditMenuListView:(_UIEditMenuListView *)arg1;
- (void)editMenuListView:(_UIEditMenuListView *)arg1 didSelectMenuElement:(UIMenuElement *)arg2;
- (bool)wantsPasteTouchAuthenticationInEditMenuListView:(_UIEditMenuListView *)arg1;

@end
