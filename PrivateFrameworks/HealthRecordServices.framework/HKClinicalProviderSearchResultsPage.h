
@interface HKClinicalProviderSearchResultsPage : NSObject <NSCopying, NSSecureCoding> {
    long long  _from;
    long long  _nextFrom;
    NSArray * _searchResults;
    long long  _size;
}

@property (nonatomic, readonly) long long from;
@property (nonatomic, readonly) long long nextFrom;
@property (nonatomic, readonly, copy) NSArray *searchResults;
@property (nonatomic, readonly) long long size;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithSearchResults:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)from;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchResults:(id)arg1 from:(long long)arg2 nextFrom:(long long)arg3 size:(long long)arg4;
- (long long)nextFrom;
- (id)searchResults;
- (long long)size;

@end
