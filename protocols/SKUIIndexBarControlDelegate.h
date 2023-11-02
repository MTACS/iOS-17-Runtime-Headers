
@protocol SKUIIndexBarControlDelegate <NSObject>

@optional

- (void)indexBarControl:(SKUIIndexBarControl *)arg1 didSelectEntryAtIndexPath:(NSIndexPath *)arg2;
- (void)indexBarControlDidSelectBeyondBottom:(SKUIIndexBarControl *)arg1;
- (void)indexBarControlDidSelectBeyondTop:(SKUIIndexBarControl *)arg1;

@end
