
@protocol CNUINavigationListViewDelegate <NSObject>

@optional

- (void)navigationListView:(CNUINavigationListView *)arg1 accessoryButtonTappedForRowWithIndexPath:(NSIndexPath *)arg2;
- (void)navigationListView:(CNUINavigationListView *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2;
- (bool)navigationListView:(CNUINavigationListView *)arg1 shouldHighlightRowAtIndexPath:(NSIndexPath *)arg2;
- (bool)navigationListView:(CNUINavigationListView *)arg1 shouldSelectRowAtIndexPath:(NSIndexPath *)arg2;

@end
