
@interface SWNavigationPreview : NSObject {
    <SWNavigationHandler> * _navigationHandler;
    NSURLRequest * _request;
    UIViewController * _viewController;
}

@property (nonatomic, readonly) <SWNavigationHandler> *navigationHandler;
@property (nonatomic, readonly) NSURLRequest *request;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1 navigationHandler:(id)arg2 URLRequest:(id)arg3;
- (id)navigationHandler;
- (id)request;
- (id)viewController;

@end
