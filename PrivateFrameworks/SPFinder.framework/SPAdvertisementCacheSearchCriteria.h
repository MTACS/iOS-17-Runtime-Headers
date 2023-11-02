
@interface SPAdvertisementCacheSearchCriteria : NSObject <NSSecureCoding> {
    SPSearchResultMarker * _searchResultMarker;
}

@property (nonatomic, retain) SPSearchResultMarker *searchResultMarker;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)searchResultMarker;
- (void)setSearchResultMarker:(id)arg1;

@end
