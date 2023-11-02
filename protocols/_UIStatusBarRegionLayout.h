
@protocol _UIStatusBarRegionLayout <NSObject>

@required

- (bool)canOverflowItems;
- (NSArray *)displayItems;
- (bool)fitsAllItems;
- (void)invalidate;
- (_UIStatusBarRegion *)region;
- (void)setDisplayItems:(NSArray *)arg1;
- (void)setRegion:(_UIStatusBarRegion *)arg1;

@optional

- (bool)mayFitDisplayItems:(NSArray *)arg1 inContainerItem:(id <UILayoutItem>)arg2;

@end
