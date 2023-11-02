
@interface VOSBluetoothSSPPairingRequest : NSObject {
    UIAlertController * _alert;
    id  _delegate;
    VOSBluetoothDevice * _device;
    id /* block */  _pairingAcceptedBlock;
    id /* block */  _pairingFailedBlock;
    int  _pairingStyle;
    PSSpecifier * _specifier;
}

@property (nonatomic, copy) id /* block */ pairingAcceptedBlock;
@property (nonatomic, copy) id /* block */ pairingFailedBlock;

- (void).cxx_destruct;
- (id)_sanitizeNameForAlert:(id)arg1;
- (void)dealloc;
- (void)dismiss;
- (void)hidPairingResult:(id)arg1;
- (id)initWithDevice:(id)arg1 andSpecifier:(id)arg2;
- (id /* block */)pairingAcceptedBlock;
- (id /* block */)pairingFailedBlock;
- (int)pairingStyle;
- (void)setDelegate:(id)arg1;
- (void)setPairingAcceptedBlock:(id /* block */)arg1;
- (void)setPairingFailedBlock:(id /* block */)arg1;
- (void)setPairingStyle:(int)arg1 andPasskey:(id)arg2;
- (void)showWithWindow:(id)arg1;

@end
