
@interface _TtCC12PhotosUICore28StoryThumbnailImageGeneratorP33_2AC47450565EC896EF788DB342AA90677Request : NSObject <PXGEngineDelegate> {
    void allowDegradedSnapshot;
    void convertToYUV;
    void engine;
    void pixelBufferRenderDestination;
    void storyConfiguration;
    void storyLayout;
    void storyModel;
    void storyQueue;
    void storyTraitCollection;
    void timeoutWaitingForNonDegraded;
    void waitingForResources;
}

- (void).cxx_destruct;
- (bool)engine:(id)arg1 shouldRenderLayout:(id)arg2 sprites:(id)arg3;
- (void)engineSetNeedsUpdate:(id)arg1;
- (id)init;

@end
