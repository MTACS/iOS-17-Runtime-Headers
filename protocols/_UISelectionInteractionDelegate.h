
@protocol _UISelectionInteractionDelegate <NSObject>

@required

- (void)_selectionInteractionDidSelect:(_UISelectionInteraction *)arg1;

@optional

- (void)_selectionInteractionDidBeginHinting:(_UISelectionInteraction *)arg1;
- (void)_selectionInteractionDidCancelHinting:(_UISelectionInteraction *)arg1;
- (bool)_selectionInteractionShouldBegin:(_UISelectionInteraction *)arg1;

@end
