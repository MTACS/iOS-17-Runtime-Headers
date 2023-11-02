
@interface PXCreateSharedLibraryActionPerformer : PXActionPerformer <PXAssistantControllerDelegate> {
    PXSharedLibraryLegacyDevicesFallbackMonitor * _legacyDevicesFallbackMonitor;
    PXSharedLibraryStatusProvider * _statusProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXSharedLibraryLegacyDevicesFallbackMonitor *legacyDevicesFallbackMonitor;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *statusProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)assistantController:(id)arg1 completedWithError:(id)arg2;
- (id)initWithSharedLibraryStatusProvider:(id)arg1;
- (id)legacyDevicesFallbackMonitor;
- (void)performActionWithLegacyDevicesFallbackMonitor:(id)arg1 presentationEnvironment:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)performUserInteractionTask;
- (void)setLegacyDevicesFallbackMonitor:(id)arg1;
- (id)statusProvider;

@end
