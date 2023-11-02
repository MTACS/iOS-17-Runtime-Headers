
@protocol _UIStatusBarRegionAxisLayout <NSObject>

@required

- (bool)canOverflowItems;
- (NSArray *)constraintsForDisplayItems:(NSArray *)arg1 layoutGuides:(NSMutableArray *)arg2 inContainerItem:(id <UILayoutItem>)arg3 axis:(long long)arg4;

@optional

- (bool)mayFitDisplayItems:(NSArray *)arg1 inContainerItem:(id <UILayoutItem>)arg2 axis:(long long)arg3;

@end
