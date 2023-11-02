
@protocol NCToggleControlDelegate <NSObject>

@optional

- (UIView *)containerViewForToggleControlClickInteractionPresentedContent:(NCToggleControl *)arg1;
- (void)toggleControlDidBeginClickInteraction:(NCToggleControl *)arg1;
- (void)toggleControlDidDismssClickInteractionPresentedContent:(NCToggleControl *)arg1;
- (void)toggleControlDidPresentClickInteractionPresentedContent:(NCToggleControl *)arg1;

@end
