
@protocol SUUIIndexBarControlControllerDelegate <NSObject>

@optional

- (void)indexBarControlController:(SUUIIndexBarControlController *)arg1 didSelectEntryDescriptorAtIndexPath:(NSIndexPath *)arg2;
- (void)indexBarControlControllerDidSelectBeyondBottom:(SUUIIndexBarControlController *)arg1;
- (void)indexBarControlControllerDidSelectBeyondTop:(SUUIIndexBarControlController *)arg1;

@end
