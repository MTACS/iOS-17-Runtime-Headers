
@interface SPAdvertisementCacheSearchResult : NSObject <NSSecureCoding> {
    NSArray * _beaconAdvertisements;
    NSError * _error;
    SPSearchResultMarker * _searchResultMarker;
}

@property (nonatomic, retain) NSArray *beaconAdvertisements;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) SPSearchResultMarker *searchResultMarker;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)beaconAdvertisements;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithBeaconAdvertisements:(id)arg1 searchResultMarker:(id)arg2 error:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)searchResultMarker;
- (void)setBeaconAdvertisements:(id)arg1;
- (void)setError:(id)arg1;
- (void)setSearchResultMarker:(id)arg1;

@end
