
@protocol MUWebContentViewControllerDelegate <NSObject>

@required

- (bool)isWebContentViewControllerParentPlacecardLoading:(MUWebContentViewController *)arg1;
- (void)removeWebContentViewController:(MUWebContentViewController *)arg1 arguments:(id)arg2;
- (void)webContentViewController:(void *)arg1 performHeightChangeWithBlock:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 13: MUWebContentViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, bool, id /* block */, void*, void, id /* block */, bool, void*
- (void)webContentViewControllerDidStopLoading:(MUWebContentViewController *)arg1;

@end
