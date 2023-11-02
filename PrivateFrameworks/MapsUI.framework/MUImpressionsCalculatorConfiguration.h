
@interface MUImpressionsCalculatorConfiguration : NSObject {
    UIView * _cachedContainerView;
    id /* block */  _containerViewProvider;
    MUImpressionsLogger * _logger;
    UIScrollView * _scrollView;
}

@property (nonatomic, readonly) UIView *hostingContainerView;
@property (nonatomic, readonly) MUImpressionsLogger *logger;
@property (nonatomic, readonly) UIScrollView *scrollView;

- (void).cxx_destruct;
- (id)hostingContainerView;
- (id)initWithLogger:(id)arg1 contentScrollView:(id)arg2 containerViewProvider:(id /* block */)arg3;
- (id)logger;
- (id)scrollView;

@end
