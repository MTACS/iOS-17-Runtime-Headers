
@interface SFCollaborationPerformer : NSObject {
    NSString * _activityType;
    SFCollaborationCloudSharingResult * _cloudSharingResult;
    <SFCollaborationItem> * _collaborationItem;
    <SFCollaborationCreationDelegate> * _creationDelegate;
    <SFCollaborationPerformerDelegate> * _delegate;
    double  _deviceScreenScale;
    bool  _didCancel;
    bool  _isRunning;
    NSObject<OS_dispatch_queue> * _performQueue;
    bool  _requiresParticipants;
}

@property (nonatomic, readonly, copy) NSString *activityType;
@property (nonatomic, readonly) SFCollaborationCloudSharingResult *cloudSharingResult;
@property (nonatomic, readonly) <SFCollaborationItem> *collaborationItem;
@property (nonatomic) <SFCollaborationCreationDelegate> *creationDelegate;
@property (nonatomic) <SFCollaborationPerformerDelegate> *delegate;
@property (nonatomic, readonly) double deviceScreenScale;
@property (nonatomic) bool didCancel;
@property (nonatomic, readonly) bool isRunning;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *performQueue;
@property (nonatomic) bool requiresParticipants;

- (void).cxx_destruct;
- (void)_createCollaborationRequestWithCompletionHandler:(id /* block */)arg1;
- (void)_createSharingURLForCollaborationRequest:(id)arg1;
- (void)_didCreateCollaborationWithResult:(id)arg1;
- (void)_fetchCollaborationAppInfoIfNeeded:(id /* block */)arg1;
- (void)_handleSubitemInSharedFolder;
- (void)_handleUnsharedFolderWithSharedSubitems;
- (void)_performAfterFolderCheck;
- (void)_performWithAddParticipantsAllowed:(bool)arg1;
- (id)activityType;
- (void)cancel;
- (id)cloudSharingResult;
- (id)collaborationItem;
- (id)creationDelegate;
- (id)delegate;
- (double)deviceScreenScale;
- (bool)didCancel;
- (id)initWithCollaborationItem:(id)arg1 activityType:(id)arg2 context:(id)arg3;
- (id)initWithCollaborationItem:(id)arg1 activityType:(id)arg2 deviceScreenScale:(double)arg3;
- (id)initWithCollaborationItem:(id)arg1 activityType:(id)arg2 requiresParticipants:(bool)arg3 deviceScreenScale:(double)arg4;
- (bool)isRunning;
- (void)perform;
- (id)performQueue;
- (bool)requiresParticipants;
- (void)setCreationDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidCancel:(bool)arg1;
- (void)setPerformQueue:(id)arg1;
- (void)setRequiresParticipants:(bool)arg1;

@end
