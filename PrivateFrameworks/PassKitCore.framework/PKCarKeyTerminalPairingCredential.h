
@interface PKCarKeyTerminalPairingCredential : PKPaymentCredential {
    PKAddCarKeyPassConfiguration * _configuration;
    NSString * _productIdentifier;
}

@property (nonatomic, readonly) PKAddCarKeyPassConfiguration *configuration;
@property (nonatomic, readonly) NSString *productIdentifier;

- (void).cxx_destruct;
- (id)configuration;
- (id)initWithConfiguration:(id)arg1 productIdentifier:(id)arg2;
- (id)productIdentifier;

@end
