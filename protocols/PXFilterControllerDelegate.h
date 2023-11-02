
@protocol PXFilterControllerDelegate <NSObject>

@required

- (NSArray *)contentFilterHiddenTypesForFilterController:(id <PXFilterController>)arg1;
- (void)filterController:(id <PXFilterController>)arg1 contentFilterStateChanged:(PXContentFilterState *)arg2;

@optional

- (void)filterControllerDidClose:(id <PXFilterController>)arg1;

@end
