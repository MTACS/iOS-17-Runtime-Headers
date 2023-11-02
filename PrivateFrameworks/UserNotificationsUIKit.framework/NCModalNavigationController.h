
@interface NCModalNavigationController : UINavigationController {
    <NCModalNavigationControllerDelegate> * _presenterDelegate;
}

@property (nonatomic) <NCModalNavigationControllerDelegate> *presenterDelegate;

- (void).cxx_destruct;
- (id)presenterDelegate;
- (void)setPresenterDelegate:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
