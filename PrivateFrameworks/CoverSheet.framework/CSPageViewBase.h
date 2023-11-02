
@interface CSPageViewBase : CSCoverSheetViewBase <CSPageView> {
    double  _contentWidth;
    UIViewController<CSPageViewControllerProtocol> * _pageViewController;
}

@property (nonatomic) double contentWidth;
@property (nonatomic) UIViewController<CSPageViewControllerProtocol> *pageViewController;

- (void).cxx_destruct;
- (double)contentWidth;
- (id)pageViewController;
- (void)setContentWidth:(double)arg1;
- (void)setPageViewController:(id)arg1;

@end
