
@interface ICMusicSubscriptionStatusCacheKey : NSObject <NSCopying> {
    NSNumber * _DSID;
    NSString * _phoneNumber;
    NSString * _storefrontIdentifier;
}

@property (nonatomic, copy) NSNumber *DSID;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *storefrontIdentifier;

- (void).cxx_destruct;
- (id)DSID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationIncludingDSID:(bool)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1 requiringDSID:(bool)arg2;
- (id)initWithStringRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)phoneNumber;
- (void)setDSID:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setStorefrontIdentifier:(id)arg1;
- (id)storefrontIdentifier;
- (id)stringRepresentation;

@end
