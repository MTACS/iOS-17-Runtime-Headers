
@interface MPModelLibraryRequest : MPModelRequest <MPCModelPlaybackRequest, MPCModelRequestRTCReporting, MPModelRequestDetailedKeepLocalStatusRequesting> {
    NSArray * _allowedItemIdentifiers;
    NSArray * _allowedSectionIdentifiers;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _contentRange;
    bool  _disableImplicitSectioning;
    NSString * _filterText;
    unsigned long long  _filteringOptions;
    bool  _isUpgradedSmartPlaylistLegacyMediaQuery;
    NSArray * _itemPropertyFilters;
    MPMediaQuery * _legacyMediaQuery;
    MPMediaLibrary * _mediaLibrary;
    NSArray * _scopedContainers;
    NSString * _sectionFilterText;
    NSArray * _sectionPropertyFilters;
    bool  _sortUsingAllowedItemIdentifiers;
    bool  _wantsDetailedKeepLocalRequestableResponse;
}

@property (nonatomic, readonly) MPMediaLibrary *_mediaLibrary;
@property (nonatomic, copy) NSArray *allowedItemIdentifiers;
@property (nonatomic, copy) NSArray *allowedSectionIdentifiers;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } contentRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableImplicitSectioning;
@property (nonatomic, copy) NSString *filterText;
@property (nonatomic) unsigned long long filteringOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isUpgradedSmartPlaylistLegacyMediaQuery;
@property (nonatomic, copy) NSArray *itemPropertyFilters;
@property (nonatomic, copy) MPMediaQuery *legacyMediaQuery;
@property (nonatomic, retain) MPMediaLibrary *mediaLibrary;
@property (nonatomic, readonly, copy) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (nonatomic, copy) NSArray *scopedContainers;
@property (nonatomic, copy) NSString *sectionFilterText;
@property (nonatomic, copy) NSArray *sectionPropertyFilters;
@property (nonatomic) bool shouldBatchResultsWithPlaceholderObjects;
@property (nonatomic) bool sortUsingAllowedItemIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsDetailedKeepLocalRequestableResponse;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_mediaLibrary;
- (id)allowedItemIdentifiers;
- (id)allowedSectionIdentifiers;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })contentRange;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)disableImplicitSectioning;
- (void)encodeWithCoder:(id)arg1;
- (id)filterText;
- (unsigned long long)filteringOptions;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUpgradedSmartPlaylistLegacyMediaQuery;
- (id)itemPropertyFilters;
- (id)itemTranslationContext;
- (id)legacyMediaQuery;
- (id)mediaLibrary;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (id)scopedContainers;
- (id)sectionFilterText;
- (id)sectionPropertyFilters;
- (id)sectionTranslationContext;
- (void)setAllowedItemIdentifiers:(id)arg1;
- (void)setAllowedSectionIdentifiers:(id)arg1;
- (void)setContentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setDisableImplicitSectioning:(bool)arg1;
- (void)setFilterText:(id)arg1;
- (void)setFilteringOptions:(unsigned long long)arg1;
- (void)setItemPropertyFilters:(id)arg1;
- (void)setLegacyMediaQuery:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setScopedContainers:(id)arg1;
- (void)setSectionFilterText:(id)arg1;
- (void)setSectionPropertyFilters:(id)arg1;
- (void)setSortUsingAllowedItemIdentifiers:(bool)arg1;
- (void)setWantsDetailedKeepLocalRequestableResponse:(bool)arg1;
- (bool)sortUsingAllowedItemIdentifiers;
- (bool)wantsDetailedKeepLocalRequestableResponse;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)rtcReportingPlayQueueSourceIdentifier;

@end
