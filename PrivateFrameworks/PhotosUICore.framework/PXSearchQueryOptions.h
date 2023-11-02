
@interface PXSearchQueryOptions : NSObject <NSCopying> {
    unsigned long long  _curatedAssetLimit;
    unsigned long long  _filterOptions;
    unsigned long long  _libraryScope;
    unsigned long long  _suggestionLimit;
    bool  _wantsCuratedAssetsFetchResult;
    bool  _wantsLibraryChanges;
    bool  _wantsWordEmbeddings;
}

@property (nonatomic) unsigned long long curatedAssetLimit;
@property (nonatomic) unsigned long long filterOptions;
@property (nonatomic) unsigned long long libraryScope;
@property (nonatomic) unsigned long long suggestionLimit;
@property (nonatomic) bool wantsCuratedAssetsFetchResult;
@property (nonatomic) bool wantsLibraryChanges;
@property (nonatomic) bool wantsWordEmbeddings;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)curatedAssetLimit;
- (id)description;
- (unsigned long long)filterOptions;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)libraryScope;
- (void)setCuratedAssetLimit:(unsigned long long)arg1;
- (void)setFilterOptions:(unsigned long long)arg1;
- (void)setLibraryScope:(unsigned long long)arg1;
- (void)setSuggestionLimit:(unsigned long long)arg1;
- (void)setWantsCuratedAssetsFetchResult:(bool)arg1;
- (void)setWantsLibraryChanges:(bool)arg1;
- (void)setWantsWordEmbeddings:(bool)arg1;
- (unsigned long long)suggestionLimit;
- (bool)wantsCuratedAssetsFetchResult;
- (bool)wantsLibraryChanges;
- (bool)wantsWordEmbeddings;

@end
