
@protocol SBIconListViewDragObserver <NSObject>

@required

- (void)iconListView:(SBIconListView *)arg1 concludeIconDrop:(id <UIDropSession>)arg2;
- (void)iconListView:(SBIconListView *)arg1 iconDropSessionDidEnd:(id <UIDropSession>)arg2;

@end
