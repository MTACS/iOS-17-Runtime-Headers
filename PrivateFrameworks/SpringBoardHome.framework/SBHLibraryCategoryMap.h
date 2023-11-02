
@interface SBHLibraryCategoryMap : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSMutableOrderedSet * _categoryIdentifiers;
    NSDate * _generatedDate;
    bool  _loadedFromDisk;
    NSMutableDictionary * _localizedCategoryNameByCategoryIdentifier;
    NSDictionary * _metadata;
    NSMutableDictionary * _sortedApplicationIdentifiersByCategoryIdentifier;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, copy) NSArray *categoryIdentifiers;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSDate *generatedDate;
@property (nonatomic) bool loadedFromDisk;
@property (nonatomic, copy) NSDictionary *localizedCategoryNameByCategoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, copy) NSDictionary *sortedApplicationIdentifiersByCategoryIdentifier;
@property (nonatomic, copy) NSString *uniqueIdentifier;

+ (id)diffMap:(id)arg1 withMap:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)categoriesContainApplicationIdentifier:(id)arg1;
- (id)categoryIdentifierForProactiveCategoryIdentifier:(unsigned long long)arg1;
- (id)categoryIdentifiers;
- (id)categoryIdentifiersForApplicationIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)generatedDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCategoryMap:(id)arg1;
- (bool)loadedFromDisk;
- (id)localizedCategoryNameByCategoryIdentifier;
- (id)localizedCategoryNameForCategoryIdentifier:(id)arg1;
- (id)metadata;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setCategoryIdentifiers:(id)arg1;
- (void)setGeneratedDate:(id)arg1;
- (void)setLoadedFromDisk:(bool)arg1;
- (void)setLocalizedCategoryNameByCategoryIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSortedApplicationIdentifiersByCategoryIdentifier:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)sortedApplicationIdentifiersByCategoryIdentifier;
- (id)sortedApplicationIdentifiersForCategoryIdentifier:(id)arg1;
- (id)uniqueIdentifier;

@end
