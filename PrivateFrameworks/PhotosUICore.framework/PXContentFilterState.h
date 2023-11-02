
@interface PXContentFilterState : NSObject <NSCopying, PXFilterState> {
    PXContentSyndicationConfigurationProvider * _contentSyndicationConfigurationProvider;
    bool  _edited;
    bool  _favorite;
    bool  _image;
    bool  _includeSharedWithYou;
    NSArray * _keywords;
    PHPhotoLibrary * _photoLibrary;
    bool  _saved;
    bool  _showOnlyReceivedICloudLinks;
    bool  _showOnlySentICloudLinks;
    bool  _showOnlySharedWithYou;
    bool  _unsaved;
    NSArray * _uuids;
    bool  _video;
}

@property (nonatomic, readonly) PXContentSyndicationConfigurationProvider *contentSyndicationConfigurationProvider;
@property (nonatomic) bool edited;
@property (nonatomic) bool favorite;
@property (nonatomic, readonly) bool hasRules;
@property (nonatomic) bool image;
@property (nonatomic) bool includeSharedWithYou;
@property (nonatomic, readonly) bool isFiltering;
@property (nonatomic, copy) NSArray *keywords;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSString *localizedFooterDescription;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) long long ruleCount;
@property (nonatomic) bool saved;
@property (nonatomic) bool showOnlyReceivedICloudLinks;
@property (nonatomic) bool showOnlySentICloudLinks;
@property (nonatomic) bool showOnlySharedWithYou;
@property (nonatomic) bool unsaved;
@property (nonatomic, copy) NSArray *uuids;
@property (nonatomic) bool video;

+ (id)defaultFilterStateForContainerCollection:(id)arg1 photoLibrary:(id)arg2;
+ (id)defaultFilterStateForPhotoLibrary:(id)arg1;

- (void).cxx_destruct;
- (void)_checkDataSourceType:(id /* block */)arg1;
- (id)contentSyndicationConfigurationProvider;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)edited;
- (bool)favorite;
- (bool)hasRules;
- (unsigned long long)hash;
- (bool)image;
- (bool)includeSharedWithYou;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (bool)isContentFilterActive:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFiltering;
- (id)keywords;
- (id)localizedDescription;
- (id)localizedFooterDescription;
- (id)photoLibrary;
- (id)predicateForUseCase:(unsigned long long)arg1;
- (long long)ruleCount;
- (bool)saved;
- (void)setEdited:(bool)arg1;
- (void)setFavorite:(bool)arg1;
- (void)setImage:(bool)arg1;
- (void)setIncludeSharedWithYou:(bool)arg1;
- (void)setKeywords:(id)arg1;
- (void)setSaved:(bool)arg1;
- (void)setShowOnlyReceivedICloudLinks:(bool)arg1;
- (void)setShowOnlySentICloudLinks:(bool)arg1;
- (void)setShowOnlySharedWithYou:(bool)arg1;
- (void)setUnsaved:(bool)arg1;
- (void)setUuids:(id)arg1;
- (void)setVideo:(bool)arg1;
- (bool)showOnlyReceivedICloudLinks;
- (bool)showOnlySentICloudLinks;
- (bool)showOnlySharedWithYou;
- (bool)unsaved;
- (id)uuids;
- (bool)video;

@end
