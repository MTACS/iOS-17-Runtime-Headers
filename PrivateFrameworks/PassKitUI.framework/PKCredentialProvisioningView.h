
@interface PKCredentialProvisioningView : PKProvisioningProgressView {
    PKSubcredentialPairingFlowControllerContext * _context;
    long long  _state;
    bool  _supportsUWB;
    NSString * _templateIdentifier;
}

@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
