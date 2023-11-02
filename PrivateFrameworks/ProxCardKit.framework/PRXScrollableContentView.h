
@interface PRXScrollableContentView : PRXCardContentView {
    UIScrollView * _scrollView;
    NSLayoutConstraint * _scrollViewHeightConstraint;
}

@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, retain) NSLayoutConstraint *scrollViewHeightConstraint;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCardStyle:(long long)arg1;
- (id)initWithCardStyle:(long long)arg1 scrollView:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)scrollView;
- (id)scrollViewHeightConstraint;
- (void)setScrollViewHeightConstraint:(id)arg1;

@end
