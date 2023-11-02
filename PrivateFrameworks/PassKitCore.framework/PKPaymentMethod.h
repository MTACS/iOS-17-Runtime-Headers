
@interface PKPaymentMethod : NSObject <NSCopying, NSSecureCoding> {
    PKBankAccountInformation * _bankAccount;
    CNContact * _billingAddress;
    NSString * _bindToken;
    NSString * _displayName;
    NSString * _network;
    NSString * _peerPaymentQuoteIdentifier;
    PKRemotePaymentInstrument * _remoteInstrument;
    PKSecureElementPass * _secureElementPass;
    unsigned long long  _type;
    bool  _usePeerPaymentBalance;
}

@property (nonatomic, retain) PKBankAccountInformation *bankAccount;
@property (nonatomic, copy) CNContact *billingAddress;
@property (nonatomic, copy) NSString *bindToken;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *network;
@property (nonatomic, copy) PKPaymentPass *paymentPass;
@property (nonatomic, copy) NSString *peerPaymentQuoteIdentifier;
@property (nonatomic, retain) PKRemotePaymentInstrument *remoteInstrument;
@property (nonatomic, copy) PKSecureElementPass *secureElementPass;
@property (nonatomic) unsigned long long type;
@property (nonatomic) bool usePeerPaymentBalance;

+ (id)paymentMethodWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;
+ (long long)version;

- (void).cxx_destruct;
- (id)bankAccount;
- (id)billingAddress;
- (id)bindToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBankAccount:(id)arg1;
- (id)initWithBindToken:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayLaterAccount:(id)arg1 primaryAccountNumberSuffix:(id)arg2 obfuscateNetworks:(bool)arg3;
- (id)initWithPaymentPass:(id)arg1 obfuscateNetworks:(bool)arg2;
- (id)initWithPaymentPass:(id)arg1 paymentApplication:(id)arg2 obfuscateNetworks:(bool)arg3;
- (id)initWithPeerPaymentQuote:(id)arg1;
- (id)initWithRemotePaymentInstrument:(id)arg1;
- (id)initWithRemotePaymentInstrument:(id)arg1 paymentApplication:(id)arg2;
- (id)network;
- (id)paymentPass;
- (id)peerPaymentQuoteIdentifier;
- (id)protobuf;
- (id)remoteInstrument;
- (id)secureElementPass;
- (void)setBankAccount:(id)arg1;
- (void)setBillingAddress:(id)arg1;
- (void)setBindToken:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setNetwork:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)setPeerPaymentQuoteIdentifier:(id)arg1;
- (void)setRemoteInstrument:(id)arg1;
- (void)setSecureElementPass:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUsePeerPaymentBalance:(bool)arg1;
- (unsigned long long)type;
- (bool)usePeerPaymentBalance;

@end
