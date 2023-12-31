
@interface QLSpotlightSearchableItemInfo : NSObject <NSSecureCoding> {
    NSString * _applicationBundleIdentifier;
    NSString * _queryString;
    NSString * _searchableItemUniqueIdentifier;
}

@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, copy) NSString *queryString;
@property (nonatomic, copy) NSString *searchableItemUniqueIdentifier;

+ (id)spotlightInfoWithUniqueIdentifier:(id)arg1 queryString:(id)arg2 applicationBundleIdentifier:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)queryString;
- (id)searchableItemUniqueIdentifier;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setQueryString:(id)arg1;
- (void)setSearchableItemUniqueIdentifier:(id)arg1;

@end
