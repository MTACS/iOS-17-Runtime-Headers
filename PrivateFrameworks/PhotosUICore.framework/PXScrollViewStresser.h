
@interface PXScrollViewStresser : NSObject {
    CADisplayLink * _displayLink;
    long long  _scrollCount;
    unsigned int  _scrollDirection;
    UIScrollView * _scrollView;
}

@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic) long long scrollCount;
@property (nonatomic) unsigned int scrollDirection;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (getter=isScrolling, nonatomic, readonly) bool scrolling;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleDisplayLink:(id)arg1;
- (id)displayLink;
- (bool)isScrolling;
- (long long)scrollCount;
- (unsigned int)scrollDirection;
- (id)scrollView;
- (void)setDisplayLink:(id)arg1;
- (void)setScrollCount:(long long)arg1;
- (void)setScrollDirection:(unsigned int)arg1;
- (void)setScrollView:(id)arg1;
- (void)startScrollingScrollView:(id)arg1 axis:(long long)arg2;
- (void)stopScrolling;

@end
