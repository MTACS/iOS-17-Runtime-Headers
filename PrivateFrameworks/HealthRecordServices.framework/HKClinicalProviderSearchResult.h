
@interface HKClinicalProviderSearchResult : NSObject <HKClinicalBrandable, NSCopying, NSSecureCoding> {
    NSString * _batchID;
    HKClinicalBrand * _brand;
    NSString * _countryCode;
    NSString * _externalID;
    NSString * _location;
    long long  _minCompatibleAPIVersion;
    NSString * _subtitle;
    bool  _supported;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *batchID;
@property (nonatomic, readonly, copy) HKClinicalBrand *brand;
@property (nonatomic, readonly, copy) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *externalID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *location;
@property (nonatomic, readonly) long long minCompatibleAPIVersion;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (getter=isSupported, nonatomic, readonly) bool supported;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)batchID;
- (id)brand;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)encodeWithCoder:(id)arg1;
- (id)externalID;
- (unsigned long long)hash;
- (id)informationURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalID:(id)arg1 batchID:(id)arg2 title:(id)arg3 subtitle:(id)arg4 location:(id)arg5 supported:(bool)arg6 countryCode:(id)arg7 brand:(id)arg8 minCompatibleAPIVersion:(long long)arg9;
- (bool)isEqual:(id)arg1;
- (bool)isSupported;
- (id)location;
- (long long)minCompatibleAPIVersion;
- (id)subtitle;
- (id)title;

@end
