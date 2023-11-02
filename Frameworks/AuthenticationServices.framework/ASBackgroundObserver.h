
@interface ASBackgroundObserver : NSObject {
    id /* block */  _block;
    UIViewController * _viewController;
}

@property (nonatomic, readonly) id /* block */ block;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_hostDidEnterBackground:(id)arg1;
- (void)_sceneDidEnterBackground:(id)arg1;
- (id /* block */)block;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 block:(id /* block */)arg2;
- (id)viewController;

@end
