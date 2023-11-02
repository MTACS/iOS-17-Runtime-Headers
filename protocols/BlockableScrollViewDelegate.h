
@protocol BlockableScrollViewDelegate <NSObject>

@required

- (void)blockableScrollViewDidChangeFrameSize;
- (bool)blockableScrollViewShouldAllowScrolling;

@end
