
@interface VFXCore.Renderer : _TtCs12_SwiftObject {
    void GPUToolBox;
    void _current;
    void _deferredDisabledRenderPasses;
    void _deferredEnabledRenderPasses;
    void _reRenderPasses;
    void _scnRenderPasses;
    void activeRenderVariantDescriptors;
    void additiveWritesToAlpha;
    void bufferPool;
    void canUseImgui;
    void captureInProgress;
    void colorRamps;
    void commandQueue;
    void counterRecorder;
    void currentCommandBuffer;
    void currentEncoder;
    void currentEncoderWrapper;
    void currentRenderPassDescriptor;
    void curves;
    void deformedBuffers;
    void depthStencilCache;
    void device;
    void encoders;
    void features;
    void globalFunctionConstants;
    void hideOpaquePass;
    void hideTransparentPass;
    void inFlightSemaphore;
    void isPostFXEnabled;
    void lock;
    void monotonicIncreasingOrder;
    void mtkMeshBufferAllocator;
    void options;
    void renderGraph;
    void renderOutputRenderPassFormat;
    void renderOutputs;
    void renderOutputsForThisFrame;
    void renderPassDescriptorPool;
    void shaderCache;
    void showDebugMenu;
    void stripIndexBuffers;
    void textureCache;
    void texturePool;
    void unscheduledCommandBuffers;
    void unscheduledCommandBuffersLock;
    void uploadLock;
    void wholeFrameBufferPool;
}

@end
