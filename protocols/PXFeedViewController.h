
@protocol PXFeedViewController <NSObject>

@required

- (NSObject<PXAnonymousScrollView> *)ppt_scrollView;
- (void)ppt_transitionToFirstItemWithWillPresentHandler:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*, id /* block */, void*, void, id /* block */, UIViewController *, void*

@end
