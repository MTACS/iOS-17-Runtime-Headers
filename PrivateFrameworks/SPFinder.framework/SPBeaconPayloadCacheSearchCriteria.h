
@interface SPBeaconPayloadCacheSearchCriteria : NSObject <NSSecureCoding> {
    NSNumber * _fetchLimit;
    SPSearchResultMarker * _searchResultMarker;
}

@property (nonatomic, copy) NSNumber *fetchLimit;
@property (nonatomic, retain) SPSearchResultMarker *searchResultMarker;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchLimit;
- (id)initWithCoder:(id)arg1;
- (id)searchResultMarker;
- (void)setFetchLimit:(id)arg1;
- (void)setSearchResultMarker:(id)arg1;

@end
