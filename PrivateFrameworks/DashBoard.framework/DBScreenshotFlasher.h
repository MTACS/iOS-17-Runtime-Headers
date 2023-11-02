
@interface DBScreenshotFlasher : NSObject {
    NSMutableArray * _flashCompletionBlocks;
    UIView * _flashView;
    UIWindow * _flashWindow;
    UIWindowScene * _windowScene;
    bool  _windowVisible;
}

@property (nonatomic, readonly) UIWindowScene *windowScene;

- (void).cxx_destruct;
- (void)_createUIWithColor:(id)arg1;
- (void)_orderWindowFrontAndThenOut:(id)arg1 withColor:(id)arg2;
- (void)_orderWindowOut:(id)arg1;
- (void)_tearDown;
- (void)flashColor:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithWindowScene:(id)arg1;
- (id)windowScene;

@end
