
@interface ICRadioLibraryArtistContentReference : ICRadioContentReference <NSCopying, NSSecureCoding> {
    NSString * _artistName;
    NSNumber * _representativeCloudIdentifier;
    NSNumber * _storeIdentifier;
}

@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, copy) NSNumber *representativeCloudIdentifier;
@property (nonatomic, copy) NSNumber *storeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artistName;
- (long long)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)matchDictionaryWithSubscriptionStatus:(id)arg1;
- (id)rawContentDictionaryWithSubscriptionStatus:(id)arg1;
- (id)representativeCloudIdentifier;
- (void)setArtistName:(id)arg1;
- (void)setRepresentativeCloudIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeIdentifier;

@end
