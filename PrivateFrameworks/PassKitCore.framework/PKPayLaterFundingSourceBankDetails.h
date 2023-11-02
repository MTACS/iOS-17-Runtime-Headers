
@interface PKPayLaterFundingSourceBankDetails : NSObject <PKPayLaterFundingSourceDetails> {
    NSString * _accountNumberSuffix;
    NSString * _bankName;
    NSString * _identifier;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *accountNumberSuffix;
@property (nonatomic, copy) NSString *bankName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountNumberSuffix;
- (id)bankName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAccountFundingSource:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 type:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDetails:(id)arg1;
- (void)setAccountNumberSuffix:(id)arg1;
- (void)setBankName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
