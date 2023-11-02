
@interface SHSheetActivityItemsManager : NSObject {
    NSArray * _activityItems;
    UIActivityViewController * _activityViewController;
    SHSheetActivityItemsResult * _cacheResult;
    <SHSheetActivityItemsManagerCollaborationDelegate> * _collaborationDelegate;
    <SHSheetActivityItemsManagerDelegate> * _delegate;
    bool  _isContentManaged;
    NSArray * _linkMetadataValues;
    bool  _linkMetadataValuesNeedsUpdate;
    NSArray * _urlRequests;
    NSArray * _urlSandboxExtensions;
}

@property (nonatomic, readonly, copy) NSArray *activityItems;
@property (nonatomic, readonly) UIActivityViewController *activityViewController;
@property (nonatomic, retain) SHSheetActivityItemsResult *cacheResult;
@property (nonatomic) <SHSheetActivityItemsManagerCollaborationDelegate> *collaborationDelegate;
@property (nonatomic) <SHSheetActivityItemsManagerDelegate> *delegate;
@property (nonatomic) bool isContentManaged;
@property (nonatomic, copy) NSArray *linkMetadataValues;
@property (nonatomic) bool linkMetadataValuesNeedsUpdate;
@property (nonatomic, readonly, copy) NSArray *suggestionAssetIdentifiers;
@property (nonatomic, copy) NSArray *urlRequests;
@property (nonatomic, copy) NSArray *urlSandboxExtensions;

+ (id)_placeholderActivityItemValuesForActivityItem:(id)arg1 activityViewController:(id)arg2 shouldUpdateMappings:(bool)arg3;
+ (id)placeholderActivityItemValuesForActivityItem:(id)arg1 activityViewController:(id)arg2;

- (void).cxx_destruct;
- (void)_configureContentManagedForActivityItem:(id)arg1 activityItemValue:(id)arg2 outURLs:(id)arg3 outScopedURLs:(id)arg4;
- (id)_delegateLoadedURLs;
- (void)_didLoadGroupActivityMetadata:(id)arg1;
- (void)_loadGroupActivityMetadataIfNeeded;
- (long long)_requestAttachmentURLItemDataForActivityItem:(id)arg1 activity:(id)arg2;
- (id)_requestInitialSocialTextForActivityItem:(id)arg1 activity:(id)arg2;
- (id)_requestItemsForActivityItem:(id)arg1 activity:(id)arg2;
- (id)_requestSubjectForActivityItem:(id)arg1 activity:(id)arg2;
- (id)_requestThumbnailForActivityItem:(id)arg1 activity:(id)arg2;
- (id)_resolveActivityItemsForActivity:(id)arg1;
- (id)_resolvePlaceholderActivityItems;
- (bool)_supportsWebpagesForActivity:(id)arg1;
- (void)_updateCacheResultForActivity:(id)arg1;
- (void)_updateIsContentManagedForURLs;
- (void)_updateLinkMetadataValues;
- (void)_updateURLRequests;
- (id)activityItemURLValuesForActivity:(id)arg1;
- (id)activityItemValuesForActivity:(id)arg1;
- (id)activityItems;
- (id)activityViewController;
- (id)cacheResult;
- (id)collaborationDelegate;
- (id)delegate;
- (void)enumerateBackgroundOperationsForActivity:(id)arg1 enumerator:(id /* block */)arg2;
- (id)initWithActivityItems:(id)arg1 activityViewController:(id)arg2 delegate:(id)arg3 collaborationDelegate:(id)arg4;
- (id)initialSocialTextForActivity:(id)arg1;
- (void)invalidateCache;
- (bool)isContentManaged;
- (id)linkMetadataValues;
- (bool)linkMetadataValuesNeedsUpdate;
- (void)loadItemProvidersForRequest:(id)arg1 activity:(id)arg2 completion:(id /* block */)arg3;
- (id)placeholderActivityItemValuesForActivityItem:(id)arg1 activityViewController:(id)arg2;
- (id)securityScopedURLsForActivity:(id)arg1;
- (void)setCacheResult:(id)arg1;
- (void)setCollaborationDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsContentManaged:(bool)arg1;
- (void)setLinkMetadataValues:(id)arg1;
- (void)setLinkMetadataValuesNeedsUpdate:(bool)arg1;
- (void)setUrlRequests:(id)arg1;
- (void)setUrlSandboxExtensions:(id)arg1;
- (id)subjectForActivity:(id)arg1;
- (id)suggestedImageDataFromActivityItem:(id)arg1;
- (id)suggestionAssetIdentifiers;
- (id)urlRequests;
- (id)urlSandboxExtensions;

@end
