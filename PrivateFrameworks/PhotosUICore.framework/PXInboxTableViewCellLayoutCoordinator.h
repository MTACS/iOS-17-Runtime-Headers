
@interface PXInboxTableViewCellLayoutCoordinator : NSObject

+ (double)dynamicCellHeight;
+ (double)dynamicDistanceFromFirstBaselineToSecondBaseline;

- (void)_layoutSubviewsInCell:(id)arg1;
- (void)_toggleShownSubviewsInCell:(id)arg1;
- (void)layoutInCell:(id)arg1;

@end
