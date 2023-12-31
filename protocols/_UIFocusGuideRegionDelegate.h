
@protocol _UIFocusGuideRegionDelegate <NSObject>

@optional

- (NSArray *)focusGuideRegion:(_UIFocusGuideRegion *)arg1 preferredFocusEnvironmentsForMovementRequest:(_UIFocusMovementRequest *)arg2;
- (void)focusGuideRegion:(_UIFocusGuideRegion *)arg1 willParticipateAsDestinationRegionInFocusUpdate:(UIFocusUpdateContext *)arg2;
- (<UIFocusItem> *)focusItemForSorting;

@end
