
@interface _SFCKShareCollaborationItem : SFCollaborationItem <SFCollaborationCKShareItem> {
    CKContainerSetupInfo * _containerSetupInfo;
    bool  _isLoadingContainerSetupInfo;
    bool  _isServiceManatee;
    LPLinkMetadata * _postSharelinkMetadata;
}

@property (nonatomic, readonly) id activityItem;
@property (nonatomic, readonly, copy) NSString *additionalContentIdentifier;
@property (nonatomic, readonly) NSNumber *canAddPeople;
@property (nonatomic, retain) SFCollaborationCloudSharingResult *cloudSharingResult;
@property (nonatomic, retain) CKContainerSetupInfo *containerSetupInfo;
@property (nonatomic, readonly, copy) NSString *contentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool defaultCollaboration;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) bool isLoading;
@property (nonatomic) bool isLoadingContainerSetupInfo;
@property (nonatomic, readonly) bool isServiceManatee;
@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (nonatomic, readonly) LPLinkMetadata *linkMetadata;
@property (nonatomic, readonly) SFCollaborationMetadata *metadata;
@property (nonatomic, readonly) NSError *metadataLoadError;
@property (nonatomic, copy) NSArray *options;
@property (nonatomic, readonly) id placeholderActivityItem;
@property (nonatomic, retain) LPLinkMetadata *postSharelinkMetadata;
@property (nonatomic, readonly, copy) NSArray *sendCopyItemPlaceholderValues;
@property (nonatomic, readonly, copy) NSArray *sendCopyItems;
@property (nonatomic, readonly) id sendCopyRepresentation;
@property (nonatomic, copy) SFCollaborationShareOptions *shareOptions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (bool)_canShowOptions;
- (id)_defaultLoadingOptionsSummary;
- (void)_didLoadContainerSetupInfo:(id)arg1;
- (void)_loadCKContainerSetupInfoIfNeeded;
- (void)_startLoading;
- (id)containerSetupInfo;
- (id)initWithItemProvider:(id)arg1 activityItem:(id)arg2;
- (bool)isLoading;
- (bool)isLoadingContainerSetupInfo;
- (bool)isServiceManatee;
- (id)linkMetadata;
- (id)postSharelinkMetadata;
- (void)setContainerSetupInfo:(id)arg1;
- (void)setIsLoadingContainerSetupInfo:(bool)arg1;
- (void)setPostSharelinkMetadata:(id)arg1;

@end
