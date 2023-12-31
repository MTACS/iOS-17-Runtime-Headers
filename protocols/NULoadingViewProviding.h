
@protocol NULoadingViewProviding <NSObject>

@required

- (void)loadingViewStartAnimating;
- (void)loadingViewStopAnimating;

@optional

- (void)loadingViewUpdateProgress:(double)arg1;

@end
