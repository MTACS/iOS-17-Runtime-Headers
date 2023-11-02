
@protocol SHSheetSession <NSObject>

@required

- (SHSheetActivitiesManager *)activitiesManager;
- (SHSheetActivityItemsManager *)activityItemsManager;
- (NSArray *)activityTypeOrder;
- (NSArray *)activityTypesToCreateInShareService;
- (UIActivityViewController *)activityViewController;
- (bool)allowsEmbedding;
- (bool)canPerformSharePlay;
- (<SFCollaborationItem> *)collaborationItem;
- (SFCollaborationItemsProvider *)collaborationItemsProvider;
- (long long)collaborationMode;
- (UISDShareSheetSessionConfiguration *)configuration;
- (bool)configureForCloudSharing;
- (bool)configureForPhotosEdit;
- (SHSheetUIServiceClientContext *)createClientContext;
- (UIActivityContentContext *)createContentContext;
- (<SFPeopleSuggestion> *)currentPeopleSuggestion;
- (NSString *)customOptionsTitle;
- (UIViewController *)customOptionsViewController;
- (NSArray *)customizationGroups;
- (long long)excludedActivityCategories;
- (NSArray *)excludedActivityTypes;
- (NSArray *)heroActionActivityTypes;
- (bool)hideHeaderView;
- (bool)hideSuggestions;
- (NSString *)identifier;
- (NSArray *)includedActivityTypes;
- (bool)instantShareSheet;
- (bool)isAirdropOnly;
- (bool)isCollaborative;
- (bool)isContentManaged;
- (bool)isExpanded;
- (SFUILoadedMetadataCollection *)metadataCollection;
- (NSArray *)peopleSuggestionBundleIds;
- (UIActivity *)performingActivity;
- (LPLinkMetadata *)photosHeaderMetadata;
- (SHSheetScene *)remoteScene;
- (NSArray *)selectedAssetIdentifiers;
- (void)setCurrentPeopleSuggestion:(id <SFPeopleSuggestion>)arg1;
- (long long)sharingStyle;
- (bool)shouldSkipPeopleSuggestions;
- (bool)shouldSuggestFamilyMembers;
- (bool)showCustomScene;
- (bool)showHeroActionsHorizontally;
- (bool)showKeyboardAutomatically;
- (bool)showOptions;
- (bool)showSharePlayProminently;
- (bool)supportsCollaboration;
- (bool)supportsSendCopy;
- (NSString *)topContentSectionText;
- (bool)useRemoteUIService;
- (bool)whitelistActionActivitiesOnly;
- (unsigned long long)xrRenderingMode;

@end
