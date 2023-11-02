
@interface BWDeferredProcessingContainerManager : BWDeferredContainerManagerBase {
    struct OpaqueFigCaptureDeferredContainerManager { } * _xpcContainerManager;
}

+ (id)sharedInstance;

- (id)createProcessingContainerWithApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 openForPeeking:(bool)arg3 err:(int*)arg4;
- (id)createTransientContainerWithApplicationID:(id)arg1 resolvedSettings:(id)arg2 unresolvedSettings:(id)arg3 pipelineParameters:(id)arg4 intermediates:(id)arg5 photoDescriptors:(id)arg6;
- (int)deleteContainerForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2;
- (id)init;
- (id)manifestsForApplicationID:(id)arg1 err:(int*)arg2;
- (void)releaseProcessingContainer:(id)arg1;
- (int)waitForShaderCompilation;

@end
