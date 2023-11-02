
@protocol CNComposeDropTargetDelegate <NSObject>

@optional

- (unsigned long long)addressKindForDropTarget:(CNComposeDropTarget *)arg1 withTargetView:(UIView *)arg2;
- (bool)dropTarget:(CNComposeDropTarget *)arg1 canDropDraggedItemsAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (long long)dropTarget:(CNComposeDropTarget *)arg1 dataOwnerForSession:(id <UIDropSession>)arg2;
- (void)dropTarget:(CNComposeDropTarget *)arg1 didDropDragItems:(NSArray *)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)dropTarget:(CNComposeDropTarget *)arg1 dragDidMoveToPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)dropTarget:(CNComposeDropTarget *)arg1 dragEnteredAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (NSArray *)dropTarget:(CNComposeDropTarget *)arg1 proposedRecipientsForDroppedContacts:(NSArray *)arg2 forSession:(id <UIDropSession>)arg3;
- (bool)dropTarget:(CNComposeDropTarget *)arg1 shouldAddDroppedContactsToTargetView:(UIView *)arg2 forSession:(id <UIDropSession>)arg3;
- (void)dropTargetDragExited:(CNComposeDropTarget *)arg1;
- (NSString *)sendingAddressForDropTarget:(CNComposeDropTarget *)arg1 withTargetView:(UIView *)arg2;

@end
