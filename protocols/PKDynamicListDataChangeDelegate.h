
@protocol PKDynamicListDataChangeDelegate <NSObject>

@required

- (void)deselectCells;
- (void)reloadAnimated:(bool)arg1;
- (void)reloadItem:(id)arg1 animated:(bool)arg2;

@end
