
@interface MPModelLibraryJoinCollaborationChangeRequest : NSObject <NSCopying> {
    MPModelPlaylist * _collaborationToJoin;
    NSURL * _invitationURL;
    NSOperationQueue * _operationQueue;
}

@property (nonatomic, retain) MPModelPlaylist *collaborationToJoin;
@property (nonatomic, retain) NSURL *invitationURL;

+ (id)sharedOperationQueue;

- (void).cxx_destruct;
- (id)collaborationToJoin;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)invitationURL;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (void)setCollaborationToJoin:(id)arg1;
- (void)setInvitationURL:(id)arg1;

@end
