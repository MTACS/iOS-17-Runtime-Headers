
@interface _UISplitViewControllerColumnContents : NSObject {
    UINavigationController * _navigationController;
    UIViewController * _navigationControllerWrapper;
    UIViewController * _viewController;
}

@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, readonly) UIViewController *navigationControllerWrapper;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (id)description;
- (id)initWithViewController:(id)arg1 navigationController:(id)arg2 navigationControllerWrapper:(id)arg3;
- (id)navigationController;
- (id)navigationControllerWrapper;
- (id)viewController;

@end
