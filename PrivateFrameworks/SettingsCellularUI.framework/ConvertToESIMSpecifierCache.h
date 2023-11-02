
@interface ConvertToESIMSpecifierCache : NSObject <TSSIMSetupDelegate> {
    <PSUILocalConvertModelDelegate> * _delegate;
    TSSIMSetupFlow * _flow;
    NSString * _iccid;
    bool  _isViewControllerPopNeeded;
    UINavigationController * _navigationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (retain) <PSUILocalConvertModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) TSSIMSetupFlow *flow;
@property (readonly) unsigned long long hash;
@property (retain) NSString *iccid;
@property bool isViewControllerPopNeeded;
@property UINavigationController *navigationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)flow;
- (id)getLogger;
- (id)iccid;
- (id)initWithDelegate:(id)arg1 isViewControllerPopNeeded:(bool)arg2 odcFlow:(id)arg3 delegate:(id)arg4 iccid:(id)arg5;
- (bool)isViewControllerPopNeeded;
- (id)navigationController;
- (void)setDelegate:(id)arg1;
- (void)setFlow:(id)arg1;
- (void)setIccid:(id)arg1;
- (void)setIsViewControllerPopNeeded:(bool)arg1;
- (void)setNavigationController:(id)arg1;
- (void)simSetupFlowCompleted:(unsigned long long)arg1;

@end
