
@interface MentalHealthUI.MetalRenderer : NSObject <MentalHealthUI.MetalRendererProtocol> {
    void commandQueue;
    void commandQueueIsEmpty;
    void currentTime;
    void defaultLibrary;
    void device;
    void displayLink;
    void displayLinkTarget;
    void displayLinkWillRenderFrame;
    void framerateDelegate;
    void lastDrawableSize;
    void layer;
    void metalArchive;
    void sampleCount;
    void superSampling;
    void timeDelta;
}

@property (nonatomic) bool commandQueueIsEmpty;
@property (nonatomic, copy) id /* block */ displayLinkWillRenderFrame;

- (void).cxx_destruct;
- (bool)commandQueueIsEmpty;
- (void)dealloc;
- (id /* block */)displayLinkWillRenderFrame;
- (id)init;
- (void)setCommandQueueIsEmpty:(bool)arg1;
- (void)setDisplayLinkWillRenderFrame:(id /* block */)arg1;

@end
