
@interface _TVWindowSizeAdaptor : NSObject {
    unsigned long long  _allowedInterfaceOrientations;
    UIWindow * _window;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } adjustedWindowSize;
@property (nonatomic, readonly) UIWindow *window;

- (void).cxx_destruct;
- (bool)_shouldSwapDimensions;
- (unsigned long long)_supportedOrientations;
- (struct CGSize { double x1; double x2; })adjustedWindowSize;
- (id)initWithWindow:(id)arg1;
- (bool)update;
- (id)window;

@end
