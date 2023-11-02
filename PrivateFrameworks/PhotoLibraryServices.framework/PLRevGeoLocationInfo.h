
@interface PLRevGeoLocationInfo : NSObject <NSSecureCoding> {
    NSString * _addressString;
    PLRevGeoCompoundNameInfo * _compoundNameInfo;
    PLRevGeoCompoundNameInfo * _compoundSecondaryNameInfo;
    NSString * _countryCode;
    NSString * _geoServiceProvider;
    bool  _isHome;
    PLRevGeoMapItem * _mapItem;
    CNPostalAddress * _postalAddress;
}

@property (nonatomic, readonly) NSString *addressString;
@property (nonatomic, readonly) PLRevGeoCompoundNameInfo *compoundNameInfo;
@property (nonatomic, readonly) PLRevGeoCompoundNameInfo *compoundSecondaryNameInfo;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSString *geoServiceProvider;
@property (nonatomic) bool isHome;
@property (nonatomic, readonly) PLRevGeoMapItem *mapItem;
@property (nonatomic, readonly) CNPostalAddress *postalAddress;

+ (id)_namingOrderForAssetDetailedReverseGeoDescription;
+ (id)_namingOrderForAssetReverseGeoDescription;
+ (id)_newRevGeoLocationInfoFromData:(id)arg1;
+ (id)countryCodeWithGEOMapItem:(id)arg1;
+ (id)infoFromPlistData:(id)arg1;
+ (bool)isInvalidWithCoder:(id)arg1;
+ (bool)isInvalidWithPlistData:(id)arg1;
+ (id)newDataFromRevGeoLocationInfo:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_locationInfoOrderForCurrentLocale;
- (id)addressString;
- (id)compoundNameInfo;
- (id)compoundSecondaryNameInfo;
- (id)countryCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)geoServiceProvider;
- (bool)hasLocation;
- (bool)hasMapItem;
- (id)initWithCoder:(id)arg1;
- (id)initWithGEOMapItem:(id)arg1;
- (id)initWithMapItem:(id)arg1 postalAddress:(id)arg2 addressString:(id)arg3 countryCode:(id)arg4 compoundNameInfo:(id)arg5 compoundSecondaryNameInfo:(id)arg6 isHome:(bool)arg7 geoServiceProvider:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isHome;
- (id)localizedDescription;
- (bool)locationWasResolvedWithBestRevGeoProvider;
- (id)mapItem;
- (id)placeNamesForLocalizedDetailedDescription;
- (id)placeWithAnnotation:(id)arg1;
- (id)plistData;
- (id)postalAddress;
- (void)setIsHome:(bool)arg1;

@end
