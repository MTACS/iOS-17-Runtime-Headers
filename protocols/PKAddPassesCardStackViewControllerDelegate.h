
@protocol PKAddPassesCardStackViewControllerDelegate <NSObject>

@required

- (void)addPassesCardStackViewController:(PKAddPassesCardStackViewController *)arg1 didCancelAddingPasses:(NSArray *)arg2;
- (void)addPassesCardStackViewController:(PKAddPassesCardStackViewController *)arg1 didFinishAddingPasses:(NSArray *)arg2;

@end
