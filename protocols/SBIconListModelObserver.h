
@protocol SBIconListModelObserver <NSObject>

@optional

- (void)iconList:(SBIconListModel *)arg1 didAddIcon:(SBIcon *)arg2;
- (void)iconList:(SBIconListModel *)arg1 didInvalidateLayoutWithGridCellInfoOptions:(unsigned long long)arg2;
- (void)iconList:(SBIconListModel *)arg1 didMoveIcon:(SBIcon *)arg2;
- (void)iconList:(SBIconListModel *)arg1 didRemoveIcon:(SBIcon *)arg2;
- (void)iconList:(SBIconListModel *)arg1 didReplaceIcon:(SBIcon *)arg2 withIcon:(SBIcon *)arg3;
- (void)iconList:(SBIconListModel *)arg1 willAddIcon:(SBIcon *)arg2;
- (void)iconList:(SBIconListModel *)arg1 willRemoveIcon:(SBIcon *)arg2;
- (void)iconListHiddenDidChange:(SBIconListModel *)arg1;
- (void)iconListHiddenWillChange:(SBIconListModel *)arg1;
- (void)iconListIconStateDidDirty:(SBIconListModel *)arg1;

@end
