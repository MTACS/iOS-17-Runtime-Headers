
@interface TSKModalNavigationController : UINavigationController {
    bool  mIsFullscreenViewController;
    bool  mShowTopSeparator;
    UIView * mTopSeparator;
}

@property (nonatomic) bool isFullscreenViewController;
@property (nonatomic) bool showTopSeparator;

- (void)dealloc;
- (id)initWithRootViewController:(id)arg1;
- (bool)isFullscreenViewController;
- (void)layoutViews;
- (void)p_statusBarWillChange:(id)arg1;
- (long long)positionForBar:(id)arg1;
- (void)setIsFullscreenViewController:(bool)arg1;
- (void)setShowTopSeparator:(bool)arg1;
- (bool)showTopSeparator;
- (void)viewDidLoad;

@end
