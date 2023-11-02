
@interface CKDistributedSiteIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSData * _identifier;
    NSData * _modifier;
}

@property (nonatomic, readonly, copy) NSData *identifier;
@property (nonatomic, readonly, copy) NSData *modifier;

+ (id)SHADescription:(id)arg1;
+ (id)pSiteIdentifierFromSiteIdentifier:(id)arg1;
+ (id)siteIdentifierFromPSiteIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithStringSiteIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 modifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)modifier;

@end
