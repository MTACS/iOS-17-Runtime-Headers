
@interface MUImageScrollView : UIScrollView

@property (nonatomic) <MUImageScrollViewDelegate> *delegate;

- (void)_centerContentIfNecessaryAdjustingContentOffset:(bool)arg1;
- (void)centerContentIgnoringInsets;

@end
