
@protocol SiriSharedUIContentPlatterViewDelegate

@required

- (void)contentPlatterView:(SiriSharedUIContentPlatterView *)arg1 didScrollWithContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)contentPlatterViewScrollDidBegin;
- (void)contentPlatterViewScrollDidEnd;
- (void)contentPlatterViewScrolledToContentOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
