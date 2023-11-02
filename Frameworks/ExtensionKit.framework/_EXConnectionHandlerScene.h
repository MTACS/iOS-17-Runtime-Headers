
@interface _EXConnectionHandlerScene : NSObject <_EXViewControllerScene> {
    UIViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (retain) id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) UIViewController *viewController;

- (void).cxx_destruct;
- (void)connectToSession:(id)arg1;
- (void)setViewController:(id)arg1;
- (bool)shouldAcceptConnection:(id)arg1;
- (id)viewController;

@end
