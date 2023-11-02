
@interface _SFFPShareCollaborationItem : SFCollaborationItem <SFCollaborationFileURLItem> {
    NSURL * _fileURL;
    bool  _isInSharedFolder;
    bool  _isLocalStorage;
    bool  _isShared;
    bool  _isThirdPartyFileProviderBacked;
    bool  _isiCloudDrive;
    NSURL * _managedFileURL;
    NSURL * _sendCopyRepresentationURL;
}

@property (nonatomic, readonly) id activityItem;
@property (nonatomic, readonly, copy) NSString *additionalContentIdentifier;
@property (nonatomic, readonly) NSNumber *canAddPeople;
@property (nonatomic, retain) SFCollaborationCloudSharingResult *cloudSharingResult;
@property (nonatomic, readonly, copy) NSString *contentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool defaultCollaboration;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) bool hasSeparateSendCopyRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) bool isCollaborativeURL;
@property (nonatomic, readonly) bool isInSharedFolder;
@property (nonatomic, readonly) bool isLoading;
@property (nonatomic, readonly) bool isLocalStorage;
@property (nonatomic, readonly) bool isShared;
@property (nonatomic, readonly) bool isThirdPartyFileProviderBacked;
@property (nonatomic, readonly) bool isiCloudDrive;
@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (nonatomic, readonly) LPLinkMetadata *linkMetadata;
@property (nonatomic, copy) NSURL *managedFileURL;
@property (nonatomic, readonly) SFCollaborationMetadata *metadata;
@property (nonatomic, readonly) NSError *metadataLoadError;
@property (nonatomic, copy) NSArray *options;
@property (nonatomic, readonly) id placeholderActivityItem;
@property (nonatomic, readonly, copy) NSArray *sendCopyItemPlaceholderValues;
@property (nonatomic, readonly, copy) NSArray *sendCopyItems;
@property (nonatomic, readonly) id sendCopyRepresentation;
@property (nonatomic, retain) NSURL *sendCopyRepresentationURL;
@property (nonatomic, copy) SFCollaborationShareOptions *shareOptions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)_defaultLoadingOptionsSummary;
- (void)_loadMetadataIfNeeded;
- (void)_loadSendCopyRepresentationIfNeeded;
- (id)additionalContentIdentifier;
- (id)fileURL;
- (bool)hasSeparateSendCopyRepresentation;
- (id)initWithFileURL:(id)arg1 itemProvider:(id)arg2 activityItem:(id)arg3 defaultCollaboration:(bool)arg4 managedFileURL:(id)arg5;
- (bool)isCollaborativeURL;
- (bool)isInSharedFolder;
- (bool)isLocalStorage;
- (bool)isShared;
- (bool)isThirdPartyFileProviderBacked;
- (bool)isiCloudDrive;
- (void)loadCopyRepresentationURLWithCompletionHandler:(id /* block */)arg1;
- (id)managedFileURL;
- (id)sendCopyRepresentationURL;
- (void)setManagedFileURL:(id)arg1;
- (void)setSendCopyRepresentationURL:(id)arg1;

@end
