
@interface UIPrintActivityWrapperNavigationController : UINavigationController <UIPrintInteractionControllerDelegate> {
    id /* block */  _completionHandler;
    bool  _presentedPrintInteractionController;
    UIPrintInteractionController * _printInteractionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool presentedPrintInteractionController;
@property (nonatomic, retain) UIPrintInteractionController *printInteractionController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPrintInteractionController:(id)arg1 completion:(id /* block */)arg2;
- (bool)presentedPrintInteractionController;
- (id)printInteractionController;
- (void)setPresentedPrintInteractionController:(bool)arg1;
- (void)setPrintInteractionController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
