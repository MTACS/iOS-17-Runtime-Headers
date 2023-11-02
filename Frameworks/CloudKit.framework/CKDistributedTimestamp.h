
@interface CKDistributedTimestamp : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _clockValue;
    CKDistributedSiteIdentifier * _siteIdentifierObject;
}

@property (nonatomic, readonly) unsigned long long clockValue;
@property (nonatomic, readonly) unsigned char modifier;
@property (nonatomic, readonly, copy) NSData *siteIdentifier;
@property (nonatomic, readonly, copy) CKDistributedSiteIdentifier *siteIdentifierObject;
@property (nonatomic, readonly) bool unordered;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)clockValue;
- (long long)compareToTimestamp:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithStringSiteIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSiteIdentifier:(id)arg1 clockValue:(unsigned long long)arg2;
- (id)initWithSiteIdentifier:(id)arg1 clockValue:(unsigned long long)arg2 modifier:(unsigned char)arg3 unordered:(bool)arg4;
- (id)initWithSiteIdentifierObject:(id)arg1 clockValue:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned char)modifier;
- (id)siteIdentifier;
- (id)siteIdentifierObject;
- (bool)unordered;

@end
