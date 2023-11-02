
@interface WFConcreteUIKitUserInterface : NSObject <WFActionUserInterfaceDelegate, WFUIKitUserInterface> {
    WFActionUserInterfaceListener * _actionUserInterfaceListener;
    WFAlert * _presentedAlert;
    UIViewController * _presentedViewController;
    UIView * _view;
    UIViewController * _viewController;
}

@property (nonatomic, retain) WFActionUserInterfaceListener *actionUserInterfaceListener;
@property (nonatomic, readonly, copy) NSArray *airPlayRouteIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long executionContext;
@property (readonly) unsigned long long hash;
@property (nonatomic) WFAlert *presentedAlert;
@property (nonatomic, retain) UIViewController *presentedViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (void)actionUserInterface:(id)arg1 setSupportedInterfaceOrientations:(unsigned long long)arg2;
- (void)actionUserInterface:(id)arg1 showViewControllerInPlatter:(id)arg2;
- (id)actionUserInterfaceListener;
- (void)dismissPlatterForActionUserInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dismissPresentedContentWithCompletionHandler:(id /* block */)arg1;
- (id)initWithView:(id)arg1 viewController:(id)arg2;
- (bool)isRunningInSiri;
- (void)presentAlert:(id)arg1;
- (id)presentationAnchorForActionUserInterface:(id)arg1;
- (id)presentedAlert;
- (id)presentedViewController;
- (void)requestActionInterfacePresentationForActionClassName:(id)arg1 classNamesByType:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestAuthorizationWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setActionUserInterfaceListener:(id)arg1;
- (void)setPresentedAlert:(id)arg1;
- (void)setPresentedViewController:(id)arg1;
- (id)userInterfaceType;
- (id)view;
- (id)viewController;
- (id)viewControllerForPresentingActionUserInterface:(id)arg1;

@end
