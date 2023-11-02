
@protocol HFDiffableDataItemManagerDelegate <NSObject>

@required

- (void)diffableDataItemManager:(HFItemManager *)arg1 didUpdateItems:(NSSet *)arg2 addItems:(NSSet *)arg3 removeItems:(NSSet *)arg4;
- (void)diffableDataItemManager:(HFItemManager *)arg1 prefetchResourcesForItems:(NSSet *)arg2;
- (void)diffableDataItemManager:(HFItemManager *)arg1 willUpdateItems:(NSSet *)arg2 addItems:(NSSet *)arg3 removeItems:(NSSet *)arg4 isInitialLoad:(bool)arg5;
- (bool)shouldPerformUpdateWithAnimationForDiffableDataItemManager:(HFItemManager *)arg1;

@end
