
@interface TSSubFlowViewController : TSOBWelcomeController <TSSIMSetupDelegate, TSSetupFlowItem> {
    <TSSIMSetupFlowDelegate> * _delegate;
    UIViewController * _firstViewController;
    bool  _isOfferFallbackFlow;
    bool  _isViewControllerPresented;
    bool  _isViewControllerPresenting;
    UIViewController * _prevViewController;
    UIView * _snapshot;
    TSSIMSetupFlow * _subFlow;
    unsigned long long  _subFlowType;
}

@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) UIViewController *firstViewController;
@property (readonly) unsigned long long hash;
@property bool isOfferFallbackFlow;
@property bool isViewControllerPresented;
@property bool isViewControllerPresenting;
@property UIViewController *prevViewController;
@property (retain) UIView *snapshot;
@property (retain) TSSIMSetupFlow *subFlow;
@property unsigned long long subFlowType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_presentFirstViewController;
- (long long)backOption;
- (id)delegate;
- (id)firstViewController;
- (id)initWithOptions:(id)arg1 navigationController:(id)arg2;
- (bool)isOfferFallbackFlow;
- (bool)isViewControllerPresented;
- (bool)isViewControllerPresenting;
- (void)prepare:(id /* block */)arg1;
- (id)prevViewController;
- (void)setDelegate:(id)arg1;
- (void)setFirstViewController:(id)arg1;
- (void)setIsOfferFallbackFlow:(bool)arg1;
- (void)setIsViewControllerPresented:(bool)arg1;
- (void)setIsViewControllerPresenting:(bool)arg1;
- (void)setPrevViewController:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (void)setSubFlow:(id)arg1;
- (void)setSubFlowType:(unsigned long long)arg1;
- (void)simSetupFlowCompleted:(unsigned long long)arg1;
- (id)snapshot;
- (id)subFlow;
- (unsigned long long)subFlowType;
- (void)takeScreenShot:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
