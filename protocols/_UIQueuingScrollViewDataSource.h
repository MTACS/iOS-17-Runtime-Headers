
@protocol _UIQueuingScrollViewDataSource <NSObject>

@required

- (void)queuingScrollView:(_UIQueuingScrollView *)arg1 didFlushView:(UIView *)arg2 animated:(bool)arg3;
- (id)queuingScrollView:(_UIQueuingScrollView *)arg1 viewAfterView:(UIView *)arg2;
- (id)queuingScrollView:(_UIQueuingScrollView *)arg1 viewBeforeView:(UIView *)arg2;

@end
