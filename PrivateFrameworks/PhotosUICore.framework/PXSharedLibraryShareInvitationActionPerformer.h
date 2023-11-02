
@interface PXSharedLibraryShareInvitationActionPerformer : PXActionPerformer {
    NSURL * _invitationURL;
}

- (void).cxx_destruct;
- (id)initWithPresentationEnvironment:(id)arg1;
- (void)performActionWithInvitationURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performUserInteractionTask;

@end
