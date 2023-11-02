
@protocol STUIStatusBarRegionLayout <NSObject>

@required

- (bool)canOverflowItems;
- (NSArray *)displayItems;
- (bool)fitsAllItems;
- (void)invalidate;
- (STUIStatusBarRegion *)region;
- (void)setDisplayItems:(NSArray *)arg1;
- (void)setRegion:(STUIStatusBarRegion *)arg1;

@optional

- (bool)mayFitDisplayItems:(NSArray *)arg1 inContainerItem:(id <UILayoutItem>)arg2;

@end
