
@interface PGRelatedComputerOptions : NSObject <NSCopying> {
    unsigned long long  _fetchLimit;
    NSSet * _filteringLocalIdentifiers;
    NSString * _referenceAssetIdentifier;
    bool  _shouldIncludeContainingEventKey;
    bool  _useDiversity;
}

@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic, copy) NSSet *filteringLocalIdentifiers;
@property (nonatomic, copy) NSString *referenceAssetIdentifier;
@property (nonatomic) bool shouldIncludeContainingEventKey;
@property (nonatomic) bool useDiversity;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)fetchLimit;
- (id)filteringLocalIdentifiers;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (id)referenceAssetIdentifier;
- (void)setFetchLimit:(unsigned long long)arg1;
- (void)setFilteringLocalIdentifiers:(id)arg1;
- (void)setReferenceAssetIdentifier:(id)arg1;
- (void)setShouldIncludeContainingEventKey:(bool)arg1;
- (void)setUseDiversity:(bool)arg1;
- (bool)shouldIncludeContainingEventKey;
- (bool)useDiversity;

@end
