
@protocol WFGiphyViewControllerDelegate <NSObject>

@optional

- (void)giphyViewController:(WFGiphyViewController *)arg1 didSelectObjects:(NSArray *)arg2;
- (void)giphyViewControllerDidCancel:(WFGiphyViewController *)arg1;

@end
