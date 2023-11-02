
@interface PKVehicleInitiatedPairingProxCardRequest : PKProxCardRequest <NSSecureCoding> {
    unsigned long long  _referralSource;
    PKCarUnlockSupportedTerminal * _supportedTerminal;
}

@property (nonatomic, readonly) unsigned long long referralSource;
@property (nonatomic, readonly) PKCarUnlockSupportedTerminal *supportedTerminal;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSupportedTerminal:(id)arg1 referralSource:(unsigned long long)arg2;
- (unsigned long long)referralSource;
- (id)supportedTerminal;

@end
