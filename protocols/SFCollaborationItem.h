
@protocol SFCollaborationItem <SFObservable>

@required

- (id)activityItem;
- (NSString *)additionalContentIdentifier;
- (NSNumber *)canAddPeople;
- (SFCollaborationCloudSharingResult *)cloudSharingResult;
- (NSString *)contentIdentifier;
- (SLCollaborationFooterViewModel *)createCollaborationFooterViewModel;
- (bool)defaultCollaboration;
- (NSUUID *)identifier;
- (bool)isLoading;
- (NSItemProvider *)itemProvider;
- (LPLinkMetadata *)linkMetadata;
- (SFCollaborationMetadata *)metadata;
- (NSError *)metadataLoadError;
- (NSArray *)options;
- (id)placeholderActivityItem;
- (void)registerChangeObserver:(id <SFCollaborationItemChangeObserver>)arg1;
- (NSArray *)sendCopyItemPlaceholderValues;
- (NSArray *)sendCopyItems;
- (id)sendCopyRepresentation;
- (void)setCloudSharingResult:(SFCollaborationCloudSharingResult *)arg1;
- (void)setOptions:(NSArray *)arg1;
- (void)setShareOptions:(SFCollaborationShareOptions *)arg1;
- (SFCollaborationShareOptions *)shareOptions;
- (long long)type;
- (void)unregisterChangeObserver:(id <SFCollaborationItemChangeObserver>)arg1;

@end
