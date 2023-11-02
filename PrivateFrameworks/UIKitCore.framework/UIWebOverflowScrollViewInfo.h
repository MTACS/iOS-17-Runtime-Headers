
@interface UIWebOverflowScrollViewInfo : NSObject {
    UIView * _oldSuperview;
    UIWebOverflowScrollView * _scrollView;
    CALayer * _scrollViewLayer;
}

@property (nonatomic, retain) UIView *oldSuperview;
@property (nonatomic, retain) UIWebOverflowScrollView *scrollView;

- (void)dealloc;
- (id)initWithScrollView:(id)arg1;
- (id)oldSuperview;
- (id)scrollView;
- (void)setOldSuperview:(id)arg1;
- (void)setScrollView:(id)arg1;

@end
