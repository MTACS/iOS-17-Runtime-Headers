
@protocol OFUIPagingViewDelegate <NSObject>

@required

- (long long)numberOfPagesInPagingView:(OFUIPagingView *)arg1;
- (UIView *)viewForPageInPagingView:(OFUIPagingView *)arg1 atIndex:(long long)arg2;

@optional

- (void)currentPageDidChangeInPagingView:(OFUIPagingView *)arg1;
- (void)pagesDidChangeInPagingView:(OFUIPagingView *)arg1;
- (void)pagingViewDidEndMoving:(OFUIPagingView *)arg1;
- (void)pagingViewWillBeginMoving:(OFUIPagingView *)arg1;

@end
