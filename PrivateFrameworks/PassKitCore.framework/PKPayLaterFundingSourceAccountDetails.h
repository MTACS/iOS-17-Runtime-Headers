
@interface PKPayLaterFundingSourceAccountDetails : NSObject <PKPayLaterFundingSourceDetails> {
    NSString * _accountIdentifier;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 type:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDetails:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
