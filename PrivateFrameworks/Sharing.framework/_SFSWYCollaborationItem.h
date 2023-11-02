
@interface _SFSWYCollaborationItem : SFCollaborationItem <SFCollaborationSWYItem> {
    bool  _isURLProviderSupported;
    SFPendingCollaboration * _pendingCollaboration;
}

@property (nonatomic, readonly) id activityItem;
@property (nonatomic, readonly, copy) NSString *additionalContentIdentifier;
@property (nonatomic, readonly) NSNumber *canAddPeople;
@property (nonatomic, retain) SFCollaborationCloudSharingResult *cloudSharingResult;
@property (nonatomic, readonly, copy) NSString *contentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool defaultCollaboration;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) bool isLoading;
@property (nonatomic) bool isURLProviderSupported;
@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (nonatomic, readonly) LPLinkMetadata *linkMetadata;
@property (nonatomic, readonly) SFCollaborationMetadata *metadata;
@property (nonatomic, readonly) NSError *metadataLoadError;
@property (nonatomic, copy) NSArray *options;
@property (nonatomic, readonly) SFPendingCollaboration *pendingCollaboration;
@property (nonatomic, readonly) id placeholderActivityItem;
@property (nonatomic, readonly, copy) NSArray *sendCopyItemPlaceholderValues;
@property (nonatomic, readonly, copy) NSArray *sendCopyItems;
@property (nonatomic, readonly) id sendCopyRepresentation;
@property (nonatomic, copy) SFCollaborationShareOptions *shareOptions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (void)_loadOptionsIfNeeded;
- (id)initWithItemProvider:(id)arg1 activityItem:(id)arg2 isURLProviderSupported:(bool)arg3;
- (bool)isURLProviderSupported;
- (id)pendingCollaboration;
- (void)setIsURLProviderSupported:(bool)arg1;

@end
