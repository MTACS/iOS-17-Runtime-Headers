
@interface PXSharedLibraryDeclineInvitationActionPerformer : PXActionPerformer {
    <PXSharedLibrary> * _invitation;
}

@property (nonatomic, retain) <PXSharedLibrary> *invitation;

- (void).cxx_destruct;
- (id)init;
- (id)invitation;
- (void)performActionWithInvitation:(id)arg1 presentationEnvironment:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)performUserInteractionTask;
- (void)setInvitation:(id)arg1;

@end
