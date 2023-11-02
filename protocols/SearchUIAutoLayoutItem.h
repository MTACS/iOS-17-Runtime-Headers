
@protocol SearchUIAutoLayoutItem <NSObject>

@required

- (UIView *)searchui_containingView;
- (bool)searchui_isContainedByItem:(id <SearchUIAutoLayoutItem>)arg1;
- (UIView *)searchui_view;

@end
