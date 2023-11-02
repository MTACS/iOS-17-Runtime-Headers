
@interface TSTransferQRCodeFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate> {
    NSString * _carrierName;
    NSString * _iccid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)firstViewController:(id /* block */)arg1;
- (id)initWithIccid:(id)arg1;

@end
