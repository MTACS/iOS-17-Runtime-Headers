
@protocol TabBarDelegate <TabCollectionViewDelegate>

@required

- (bool)tabBar:(TabBar *)arg1 canMoveItem:(TabBarItem *)arg2;
- (void)tabBar:(TabBar *)arg1 toggleMediaStateMutedForItem:(TabBarItem *)arg2;

@end
