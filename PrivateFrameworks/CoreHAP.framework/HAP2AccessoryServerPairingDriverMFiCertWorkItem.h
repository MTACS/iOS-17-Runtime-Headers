
@interface HAP2AccessoryServerPairingDriverMFiCertWorkItem : HAP2AccessoryServerPairingDriverWorkItem {
    NSError * _cancelError;
}

@property (nonatomic, retain) NSError *cancelError;

+ (id)checkCertificate;

- (void).cxx_destruct;
- (id)cancelError;
- (void)cancelWithError:(id)arg1;
- (void)runForPairingDriver:(id)arg1;
- (void)setCancelError:(id)arg1;

@end
