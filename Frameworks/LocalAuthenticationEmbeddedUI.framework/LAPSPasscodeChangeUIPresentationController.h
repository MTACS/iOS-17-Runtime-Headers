
@interface LAPSPasscodeChangeUIPresentationController : NSObject {
    LAContainerViewController * _containerVC;
    bool  _parentModalInPresentationOriginalFlag;
    UIViewController * _parentVC;
    UIViewController * _rootVC;
}

- (void).cxx_destruct;
- (void)_restoreParentModalInPresentationFlag;
- (void)_storeParentModalInPresentationFlag;
- (void)dismissWithCompletion:(id /* block */)arg1;
- (id)initWithParentVC:(id)arg1;
- (void)presentAlertVC:(id)arg1;
- (void)presentVC:(id)arg1 animated:(bool)arg2;

@end
