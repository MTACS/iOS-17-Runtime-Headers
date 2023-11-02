
@interface SFCollaborationItemsProvider : NSObject <_SFCollaborationItemsRequestDelegate> {
    NSArray * _activityItems;
    NSArray * _collaborationItems;
    _SFCollaborationItemsRequest * _currentRequest;
    <SFCollaborationItemsProviderDelegate> * _delegate;
    bool  _isURLProviderSupported;
    NSURL * _managedFileURL;
    bool  _supportsMultipleCollaboration;
}

@property (nonatomic, copy) NSArray *activityItems;
@property (nonatomic, copy) NSArray *collaborationItems;
@property (nonatomic, retain) _SFCollaborationItemsRequest *currentRequest;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFCollaborationItemsProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isURLProviderSupported;
@property (nonatomic, readonly, copy) NSURL *managedFileURL;
@property (nonatomic, readonly) bool multipleCollaborationItems;
@property (nonatomic, readonly, copy) NSArray *placeholderActivityItems;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsMultipleCollaboration;

- (void).cxx_destruct;
- (void)_didCompleteCollaborationItems:(id)arg1;
- (void)_updateCollaborationItems;
- (id)activityItems;
- (id)activityItemsForActivity:(id)arg1 collaborationResult:(id)arg2;
- (id)activityItemsForActivity:(id)arg1 collaborationResult:(id)arg2 isCollaborative:(bool)arg3;
- (id)collaborationItemForActivityItem:(id)arg1;
- (id)collaborationItems;
- (id)collaborationItemsRequest:(id)arg1 resolveActivityItem:(id)arg2;
- (id)collaborationServiceForItemsRequest:(id)arg1;
- (id)currentRequest;
- (id)delegate;
- (id)initWithActivityItems:(id)arg1 delegate:(id)arg2;
- (id)initWithActivityItems:(id)arg1 delegate:(id)arg2 managedFileURL:(id)arg3 isURLProviderSupported:(bool)arg4;
- (bool)isURLProviderSupported;
- (id)managedFileURL;
- (bool)multipleCollaborationItems;
- (id)placeholderActivityItems;
- (void)setActivityItems:(id)arg1;
- (void)setCollaborationItems:(id)arg1;
- (void)setCurrentRequest:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)supportsMultipleCollaboration;

@end
