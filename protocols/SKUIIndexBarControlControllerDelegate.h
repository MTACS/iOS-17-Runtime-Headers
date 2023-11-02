
@protocol SKUIIndexBarControlControllerDelegate <NSObject>

@optional

- (void)indexBarControlController:(SKUIIndexBarControlController *)arg1 didSelectEntryDescriptorAtIndexPath:(NSIndexPath *)arg2;
- (void)indexBarControlControllerDidSelectBeyondBottom:(SKUIIndexBarControlController *)arg1;
- (void)indexBarControlControllerDidSelectBeyondTop:(SKUIIndexBarControlController *)arg1;

@end
