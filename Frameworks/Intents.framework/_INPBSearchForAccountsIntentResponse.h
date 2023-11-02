
@interface _INPBSearchForAccountsIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBSearchForAccountsIntentResponse> {
    NSArray * _accounts;
    struct { }  _has;
}

@property (nonatomic, copy) NSArray *accounts;
@property (nonatomic, readonly) unsigned long long accountsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)accountsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accounts;
- (id)accountsAtIndex:(unsigned long long)arg1;
- (unsigned long long)accountsCount;
- (void)addAccounts:(id)arg1;
- (void)clearAccounts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccounts:(id)arg1;
- (void)writeTo:(id)arg1;

@end
