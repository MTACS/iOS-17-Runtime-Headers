
@interface PKPassContent : PKContent <NSSecureCoding> {
    NSDictionary * _allSemantics;
    NSArray * _autoTopUpFields;
    NSArray * _auxiliaryPassInformationSections;
    NSArray * _backFieldBuckets;
    NSArray * _balanceFields;
    NSSet * _balances;
    PKPassBarcodeSettings * _barcodeSettings;
    NSString * _businessChatIdentifier;
    NSString * _cardholderInfoSectionTitle;
    NSDictionary * _features;
    PKFidoProfile * _fidoProfile;
    NSArray * _frontFieldBuckets;
    NSDictionary * _issuerBindingInformation;
    NSString * _logoText;
    NSArray * _passDetailSections;
    PKPassPersonalization * _personalization;
    NSDictionary * _semantics;
    long long  _transitType;
}

@property (nonatomic, copy) NSDictionary *allSemantics;
@property (nonatomic, copy) NSArray *autoTopUpFields;
@property (nonatomic, copy) NSArray *auxiliaryPassInformationSections;
@property (nonatomic, copy) NSArray *backFieldBuckets;
@property (nonatomic, copy) NSArray *balanceFields;
@property (nonatomic, copy) NSSet *balances;
@property (nonatomic, retain) PKPassBarcodeSettings *barcodeSettings;
@property (nonatomic, copy) NSString *businessChatIdentifier;
@property (nonatomic, copy) NSString *cardholderInfoSectionTitle;
@property (nonatomic, readonly) NSDictionary *features;
@property (nonatomic, retain) PKFidoProfile *fidoProfile;
@property (nonatomic, copy) NSArray *frontFieldBuckets;
@property (nonatomic, retain) NSDictionary *issuerBindingInformation;
@property (nonatomic, copy) NSString *logoText;
@property (nonatomic, copy) NSArray *passDetailSections;
@property (nonatomic, copy) PKPassPersonalization *personalization;
@property (nonatomic, readonly) NSArray *primaryFields;
@property (nonatomic, copy) NSDictionary *semantics;
@property (nonatomic) long long transitType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allSemantics;
- (id)autoTopUpFields;
- (id)auxiliaryPassInformationSections;
- (id)backFieldBuckets;
- (id)balanceFields;
- (id)balances;
- (id)barcodeSettings;
- (id)businessChatIdentifier;
- (id)cardholderInfoSectionTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)features;
- (id)fidoProfile;
- (void)flushFormattedFieldValues;
- (id)frontFieldBuckets;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3 passType:(unsigned long long)arg4;
- (id)issuerBindingInformation;
- (id)logoText;
- (id)passDetailSections;
- (id)personalization;
- (id)primaryFields;
- (id)semantics;
- (void)setAllSemantics:(id)arg1;
- (void)setAutoTopUpFields:(id)arg1;
- (void)setAuxiliaryPassInformationSections:(id)arg1;
- (void)setBackFieldBuckets:(id)arg1;
- (void)setBalanceFields:(id)arg1;
- (void)setBalances:(id)arg1;
- (void)setBarcodeSettings:(id)arg1;
- (void)setBusinessChatIdentifier:(id)arg1;
- (void)setCardholderInfoSectionTitle:(id)arg1;
- (void)setFidoProfile:(id)arg1;
- (void)setFrontFieldBuckets:(id)arg1;
- (void)setIssuerBindingInformation:(id)arg1;
- (void)setLogoText:(id)arg1;
- (void)setPassDetailSections:(id)arg1;
- (void)setPersonalization:(id)arg1;
- (void)setSemantics:(id)arg1;
- (void)setTransitType:(long long)arg1;
- (long long)transitType;

@end
