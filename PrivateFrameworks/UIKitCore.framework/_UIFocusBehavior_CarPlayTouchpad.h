
@interface _UIFocusBehavior_CarPlayTouchpad : _UIFocusBehavior_CarPlay

+ (id)sharedInstance;

- (bool)refinesIndexBarTargetContentOffset;
- (bool)shouldEnableFocusOnSelect;
- (bool)supportsIndirectPanningMovement;

@end
