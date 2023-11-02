
@interface TSPRXSIMTransferCompleteViewController : PRXCardContentViewController <TSSetupFlowItem> {
    <TSSIMSetupFlowDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
