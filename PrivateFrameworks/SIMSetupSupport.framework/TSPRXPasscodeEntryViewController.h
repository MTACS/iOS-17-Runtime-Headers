
@interface TSPRXPasscodeEntryViewController : PRXPasscodeEntryViewController <TSSetupFlowItem> {
    SSProximityDevice * _btDevice;
    <TSSIMSetupFlowDelegate> * _delegate;
}

@property (retain) SSProximityDevice *btDevice;
@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handlePINCodeUpdate:(id)arg1;
- (id)btDevice;
- (id)delegate;
- (id)initWithBtDevice:(id)arg1 passcodeType:(int)arg2;
- (void)retry;
- (void)setBtDevice:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
