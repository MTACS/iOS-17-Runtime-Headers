
@interface PKAccountScheduledTransfer : NSObject <NSSecureCoding> {
    PKCurrencyAmount * _currencyAmount;
    PKAccountTransferExternalAccount * _externalAccount;
    unsigned long long  _type;
}

@property (nonatomic, retain) PKCurrencyAmount *currencyAmount;
@property (nonatomic, retain) PKAccountTransferExternalAccount *externalAccount;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)currencyAmount;
- (void)encodeWithCoder:(id)arg1;
- (id)externalAccount;
- (id)hashComponent;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrencyAmount:(id)arg1 type:(unsigned long long)arg2 externalAccount:(id)arg3;
- (id)jsonDictionaryRepresentation;
- (void)setCurrencyAmount:(id)arg1;
- (void)setExternalAccount:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
