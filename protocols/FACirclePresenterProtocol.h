
@protocol FACirclePresenterProtocol <NSObject>

@required

- (RUIStyle *)customRUIStyle;
- (<FACirclePresenterDelegate> *)delegate;
- (void)loadRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FACircleStateResponse *, void*
- (UIViewController *)presenter;
- (void)setCustomRUIStyle:(RUIStyle *)arg1;
- (void)setDelegate:(id <FACirclePresenterDelegate>)arg1;
- (void)setPresenter:(UIViewController *)arg1;

@end
