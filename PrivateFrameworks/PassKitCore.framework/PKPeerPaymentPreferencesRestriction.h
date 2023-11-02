
@interface PKPeerPaymentPreferencesRestriction : NSObject <NSCopying, NSSecureCoding> {
    NSString * _altDSID;
    unsigned long long  _restrictionType;
}

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic) unsigned long long restrictionType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPreferencesRestriction:(id)arg1;
- (unsigned long long)restrictionType;
- (void)setAltDSID:(id)arg1;
- (void)setRestrictionType:(unsigned long long)arg1;

@end
