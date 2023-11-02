
@interface MusicKit_SoftLinking_MPModelLibraryRequest : MusicKit_SoftLinking_MPModelRequest {
    NSArray * _allowedItemIdentifiers;
    NSArray * _allowedSectionIdentifiers;
    NSString * _itemFilterText;
    NSArray * _itemSortDescriptors;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSArray * _scopedContainers;
    NSString * _sectionFilterText;
    NSArray * _sectionSortDescriptors;
    id  _underlyingRequest;
    bool  _wantsDetailedKeepLocalRequestableResponse;
}

@property (nonatomic, copy) NSArray *allowedItemIdentifiers;
@property (nonatomic, copy) NSArray *allowedSectionIdentifiers;
@property (nonatomic, copy) NSString *itemFilterText;
@property (nonatomic, copy) NSArray *itemSortDescriptors;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, copy) NSArray *scopedContainers;
@property (nonatomic, copy) NSString *sectionFilterText;
@property (nonatomic, copy) NSArray *sectionSortDescriptors;
@property (nonatomic) id underlyingRequest;
@property (nonatomic) bool wantsDetailedKeepLocalRequestableResponse;

- (void).cxx_destruct;
- (id)allowedItemIdentifiers;
- (id)allowedSectionIdentifiers;
- (id)initWithLegacyModelObject:(id)arg1 itemType:(long long)arg2 properties:(id)arg3 relationships:(id)arg4;
- (id)initWithLegacyModelObjectType:(long long)arg1 itemKind:(id)arg2 allowedItemIdentifiers:(id)arg3 itemSortDescriptors:(id)arg4 itemFilterText:(id)arg5 itemPropertyFilters:(id)arg6 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7 wantsDetailedKeepLocalRequestableResponse:(bool)arg8 ignoreExplicitContentRestrictions:(bool)arg9 includeOnlyDownloadedContent:(bool)arg10 includeOnlyFavoritedContent:(bool)arg11 includeNonLibraryAddedContent:(bool)arg12 excludeNonPinnedEntities:(bool)arg13 mediaLibrary:(id)arg14;
- (id)initWithLegacyModelObjectType:(long long)arg1 sectionLegacyModelObjectType:(long long)arg2 itemKind:(id)arg3 sectionKind:(id)arg4 allowedItemIdentifiers:(id)arg5 allowedSectionIdentifiers:(id)arg6 scopedContainers:(id)arg7 itemSortDescriptors:(id)arg8 sectionSortDescriptors:(id)arg9 itemFilterText:(id)arg10 sectionFilterText:(id)arg11 itemPropertyFilters:(id)arg12 sectionPropertyFilters:(id)arg13 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg14 wantsDetailedKeepLocalRequestableResponse:(bool)arg15 ignoreExplicitContentRestrictions:(bool)arg16 includeOnlyDownloadedContent:(bool)arg17 includeOnlyFavoritedContent:(bool)arg18 includeNonLibraryAddedContent:(bool)arg19 excludeNonPinnedEntities:(bool)arg20 mediaLibrary:(id)arg21;
- (id)itemFilterText;
- (id)itemSortDescriptors;
- (void)performWithCompletionHandler:(id /* block */)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)scopedContainers;
- (id)sectionFilterText;
- (id)sectionSortDescriptors;
- (void)setAllowedItemIdentifiers:(id)arg1;
- (void)setAllowedSectionIdentifiers:(id)arg1;
- (void)setItemFilterText:(id)arg1;
- (void)setItemSortDescriptors:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setScopedContainers:(id)arg1;
- (void)setSectionFilterText:(id)arg1;
- (void)setSectionSortDescriptors:(id)arg1;
- (void)setUnderlyingRequest:(id)arg1;
- (void)setWantsDetailedKeepLocalRequestableResponse:(bool)arg1;
- (id)underlyingRequest;
- (bool)wantsDetailedKeepLocalRequestableResponse;

@end
