
@interface _SFCollaborationItemsRequest : NSObject {
    NSArray * _activityItems;
    NSMutableArray * _collaborationItems;
    id /* block */  _completionHandler;
    <_SFCollaborationItemsRequestDelegate> * _delegate;
    bool  _isURLProviderSupported;
    NSURL * _managedFileURL;
    NSMutableArray * _remainingActivityItems;
    bool  _supportsMultipleCollaboration;
}

@property (nonatomic, copy) NSArray *activityItems;
@property (nonatomic, retain) NSMutableArray *collaborationItems;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) <_SFCollaborationItemsRequestDelegate> *delegate;
@property (nonatomic) bool isURLProviderSupported;
@property (nonatomic, copy) NSURL *managedFileURL;
@property (nonatomic, retain) NSMutableArray *remainingActivityItems;
@property (nonatomic) bool supportsMultipleCollaboration;

- (void).cxx_destruct;
- (void)_addCollaborationItem:(id)arg1;
- (void)_processRemainingActivityItems;
- (id)activityItems;
- (void)cancel;
- (id)collaborationItems;
- (id)collaborationService;
- (id /* block */)completionHandler;
- (id)delegate;
- (id)initWithActivityItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isURLProviderSupported;
- (id)managedFileURL;
- (void)perform;
- (id)remainingActivityItems;
- (void)setActivityItems:(id)arg1;
- (void)setCollaborationItems:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsURLProviderSupported:(bool)arg1;
- (void)setManagedFileURL:(id)arg1;
- (void)setRemainingActivityItems:(id)arg1;
- (void)setSupportsMultipleCollaboration:(bool)arg1;
- (bool)supportsMultipleCollaboration;

@end
