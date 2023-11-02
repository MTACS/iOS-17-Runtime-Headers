
@interface PreviewsInjection.UVPreviewSceneAgent : PreviewsInjection.UVPreviewAgent <UVAgentPreviewSceneServiceProtocol> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentUpdateResult;
    void scene;
    void sceneBehavior;
    void sceneMessenger;
    void serviceConnection;
}

- (void).cxx_destruct;
- (void)generateStaticOutput:(id /* block */)arg1;
- (id)init;
- (void)performUpdate:(id)arg1 sceneContext:(id)arg2 replyHandler:(id /* block */)arg3;

@end
