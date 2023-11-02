
@interface WFUIKitParameterEditingController : NSObject {
    <WFUIKitParameterEditingControllerDelegate> * _delegate;
}

@property (nonatomic) <WFUIKitParameterEditingControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)createViewControllerWithInitialState:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
