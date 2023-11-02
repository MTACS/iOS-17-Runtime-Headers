
@interface GEOTerritoryRegulatoryInfo : NSObject {
    long long  _coastalWaters;
    bool  _disputed;
    NSString * _disputedTerritoryName;
    NSArray * _interestedPartyIso3166CountryCodes2;
    NSArray * _interestedPartyIso3166CountryCodes3;
    NSString * _iso3166CountryCode2;
    NSString * _iso3166CountryCode3;
    unsigned long long  _uniqueIdentifier;
}

@property (getter=isCoastalWaters, nonatomic, readonly) long long coastalWaters;
@property (getter=isDisputed, nonatomic, readonly) bool disputed;
@property (nonatomic, readonly) NSString *disputedTerritoryName;
@property (nonatomic, readonly) NSArray *interestedPartyIso3166CountryCodes;
@property (nonatomic, readonly) NSArray *interestedPartyIso3166CountryCodes2;
@property (nonatomic, readonly) NSArray *interestedPartyIso3166CountryCodes3;
@property (nonatomic, readonly) NSString *iso3166CountryCode;
@property (nonatomic, readonly) NSString *iso3166CountryCode2;
@property (nonatomic, readonly) NSString *iso3166CountryCode3;
@property (nonatomic, readonly) unsigned long long uniqueIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)disputedTerritoryName;
- (unsigned long long)hash;
- (id)initWithUnsafeTerritoryData:(id)arg1 nameDB:(id)arg2 iso3to2Mapping:(id)arg3;
- (id)interestedPartyIso3166CountryCodes;
- (id)interestedPartyIso3166CountryCodes2;
- (id)interestedPartyIso3166CountryCodes3;
- (long long)isCoastalWaters;
- (bool)isDisputed;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToGEOTerritoryRegulatoryInfo:(id)arg1;
- (id)iso3166CountryCode;
- (id)iso3166CountryCode2;
- (id)iso3166CountryCode3;
- (unsigned long long)uniqueIdentifier;

@end
