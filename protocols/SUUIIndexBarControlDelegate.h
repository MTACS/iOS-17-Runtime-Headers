
@protocol SUUIIndexBarControlDelegate <NSObject>

@optional

- (void)indexBarControl:(SUUIIndexBarControl *)arg1 didSelectEntryAtIndexPath:(NSIndexPath *)arg2;
- (void)indexBarControlDidSelectBeyondBottom:(SUUIIndexBarControl *)arg1;
- (void)indexBarControlDidSelectBeyondTop:(SUUIIndexBarControl *)arg1;

@end
