
@interface PXSharedLibraryViewInvitationActionPerformer : PXActionPerformer <PXAssistantControllerDelegate> {
    <PXSharedLibrary> * _invitation;
    PXSharedLibraryLegacyDevicesFallbackMonitor * _legacyDevicesFallbackMonitor;
    PXSharedLibraryStatusProvider * _sharedLibrartyStatusProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <PXSharedLibrary> *invitation;
@property (nonatomic, retain) PXSharedLibraryLegacyDevicesFallbackMonitor *legacyDevicesFallbackMonitor;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *sharedLibrartyStatusProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)assistantController:(id)arg1 completedWithError:(id)arg2;
- (id)initWithSharedLibraryStatusProvider:(id)arg1;
- (id)invitation;
- (id)legacyDevicesFallbackMonitor;
- (void)performActionWithInvitation:(id)arg1 legacyDevicesFallbackMonitor:(id)arg2 presentationEnvironment:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)performUserInteractionTask;
- (void)setInvitation:(id)arg1;
- (void)setLegacyDevicesFallbackMonitor:(id)arg1;
- (id)sharedLibrartyStatusProvider;

@end
