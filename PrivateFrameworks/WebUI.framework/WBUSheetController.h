
@interface WBUSheetController : NSObject {
    WebUIAlert * _alert;
    UIAlertController * _alertController;
    NSMutableArray * _alertInvocationQueue;
    id  _delegate;
}

+ (id)alertControllerForAlert:(id)arg1 automaticallyDismiss:(bool)arg2 withCompletionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_alertDidDismissWithAction:(int)arg1;
- (void)hideSheet;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)showSheetForAlert:(id)arg1;
- (void)showSheetForAlert:(id)arg1 inView:(id)arg2;

@end
