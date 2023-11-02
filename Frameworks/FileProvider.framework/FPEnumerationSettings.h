
@interface FPEnumerationSettings : NSObject <NSCopying, NSSecureCoding> {
    NSFileProviderSearchQuery * _searchQuery;
    NSArray * _sortDescriptors;
}

@property (copy) NSFileProviderSearchQuery *searchQuery;
@property (copy) NSArray *sortDescriptors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)searchQuery;
- (void)setSearchQuery:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;

@end
