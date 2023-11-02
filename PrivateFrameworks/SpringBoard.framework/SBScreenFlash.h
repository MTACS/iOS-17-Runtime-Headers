
@interface SBScreenFlash : NSObject {
    NSMutableArray * _flashCompletionBlocks;
    UIView * _flashView;
    UIWindow * _flashWindow;
    UIScreen * _screen;
    bool  _windowVisible;
}

+ (id)mainScreenFlasher;

- (void).cxx_destruct;
- (void)_createUIWithColor:(id)arg1;
- (void)_orderWindowFrontAndThenOut:(id)arg1 withColor:(id)arg2;
- (void)_orderWindowOut:(id)arg1;
- (void)_tearDown;
- (void)flashColor:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)flashWhiteWithCompletion:(id /* block */)arg1;
- (id)initWithScreen:(id)arg1;

@end
