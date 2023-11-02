
@interface PHAssetPhotosOneUpProperties : PHAssetPropertySet {
    NSData * _reverseLocationData;
    bool  _reverseLocationDataIsValid;
    bool  _shiftedLocationIsValid;
    unsigned long long  _variationSuggestionStates;
}

@property (nonatomic, readonly) NSString *addressString;
@property (nonatomic, readonly) NSData *reverseLocationData;
@property (nonatomic, readonly) bool reverseLocationDataIsValid;
@property (nonatomic, readonly) bool shiftedLocationIsValid;
@property (nonatomic, readonly) unsigned long long variationSuggestionStates;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)_locationInfo;
- (id)addressString;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (id)localizedGeoDescriptionIsHome:(bool*)arg1;
- (id)placeNamesForLocalizedDetailedDescriptionIsHome:(bool*)arg1;
- (id)reverseLocationData;
- (bool)reverseLocationDataIsValid;
- (bool)shiftedLocationIsValid;
- (unsigned long long)variationSuggestionStates;

@end
