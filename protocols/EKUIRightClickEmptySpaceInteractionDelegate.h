
@protocol EKUIRightClickEmptySpaceInteractionDelegate <NSObject>

@required

- (bool)interaction:(EKUIRightClickEmptySpaceInteraction *)arg1 canCreateEventAtPoint:(struct CGPoint { double x1; double x2; })arg2 inView:(UIView *)arg3;
- (bool)interaction:(EKUIRightClickEmptySpaceInteraction *)arg1 canPasteEventAtPoint:(struct CGPoint { double x1; double x2; })arg2 inView:(UIView *)arg3;
- (void)interaction:(EKUIRightClickEmptySpaceInteraction *)arg1 createEventAtPoint:(struct CGPoint { double x1; double x2; })arg2 inView:(UIView *)arg3;
- (void)interaction:(EKUIRightClickEmptySpaceInteraction *)arg1 pasteEventAtPoint:(struct CGPoint { double x1; double x2; })arg2 inView:(UIView *)arg3;
- (bool)interaction:(EKUIRightClickEmptySpaceInteraction *)arg1 shouldShowMenuAtPoint:(struct CGPoint { double x1; double x2; })arg2 inView:(UIView *)arg3;
- (NSString *)interaction:(EKUIRightClickEmptySpaceInteraction *)arg1 subtitleForPasteActionAtPoint:(struct CGPoint { double x1; double x2; })arg2 inView:(UIView *)arg3;
- (NSString *)interaction:(EKUIRightClickEmptySpaceInteraction *)arg1 titleForPasteActionAtPoint:(struct CGPoint { double x1; double x2; })arg2 inView:(UIView *)arg3;

@end
