
@interface GEOAddressObject : NSObject <NSSecureCoding> {
    int * _knownAccuracy;
    _GEOAddressObject * _pimpl;
}

@property (nonatomic, readonly) NSString *displayLanguage;
@property (nonatomic, readonly) bool hasKnownAccuracy;
@property (nonatomic, readonly) int knownAccuracy;

+ (id)addressObjectForPlaceData:(id)arg1;
+ (id)addressObjectWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4;
+ (bool)isLoggingDebug;
+ (bool)isMarkingMMStrings;
+ (id)libraryVersion;
+ (void)markMMStrings:(bool)arg1;
+ (void)setLoggingDebug:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (id)addressDictionary;
- (id)cityDisplayNameWithFallback:(bool)arg1;
- (id)cnPostalAddress;
- (id)countryName;
- (void)dealloc;
- (id)displayLanguage;
- (void)encodeWithCoder:(id)arg1;
- (id)fullAddressNoCurrentCountryWithMultiline:(bool)arg1;
- (id)fullAddressWithMultiline:(bool)arg1;
- (id)fullAddressWithMultiline:(bool)arg1 relative:(id)arg2;
- (bool)hasKnownAccuracy;
- (unsigned long long)hash;
- (id)initWithCNPostalAddress:(id)arg1 language:(id)arg2 country:(id)arg3 phoneticLocale:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactAddressDictionary:(id)arg1 language:(id)arg2 country:(id)arg3 phoneticLocale:(id)arg4;
- (id)initWithCurrentCountry;
- (id)initWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4 language:(id)arg5 country:(id)arg6 phoneticLocale:(id)arg7;
- (bool)isEqual:(id)arg1;
- (int)knownAccuracy;
- (id)locationAddress;
- (id)name;
- (id)neighborhoodName:(bool)arg1;
- (id)parkingDisplayName;
- (id)phoneticAddress;
- (id)phoneticLocaleIdentifier;
- (id)phoneticName;
- (id)rawBytes;
- (id)shortAddress;
- (id)spokenAddress;
- (id)spokenAddressForLocale:(id)arg1;
- (id)spokenName;
- (id)spokenStructuredAddress;
- (id)titlesForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)venueLabel;
- (id)venueLabel:(long long)arg1;
- (id)venueLevel;
- (id)venueShortAddress;
- (id)weatherDisplayName;
- (id)weatherLocationName;

@end
