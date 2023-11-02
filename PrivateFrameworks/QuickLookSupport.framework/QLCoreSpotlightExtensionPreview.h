
@interface QLCoreSpotlightExtensionPreview : QLExtensionPreview {
    NSString * _query;
    NSString * _searchableItemTitle;
    NSURL * _searchableItemURL;
    NSString * _searchableItemUniqueIdentifier;
}

@property (copy) NSString *query;
@property (copy) NSString *searchableItemTitle;
@property (copy) NSURL *searchableItemURL;
@property (copy) NSString *searchableItemUniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuery:(id)arg1 searchableItemURL:(id)arg2 searchableItemTitle:(id)arg3 searchableItemUUID:(id)arg4 description:(id)arg5;
- (id)query;
- (id)searchableItemTitle;
- (id)searchableItemURL;
- (id)searchableItemUniqueIdentifier;
- (void)setQuery:(id)arg1;
- (void)setSearchableItemTitle:(id)arg1;
- (void)setSearchableItemURL:(id)arg1;
- (void)setSearchableItemUniqueIdentifier:(id)arg1;

@end
