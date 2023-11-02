
@interface MeasureFoundation.DebugWorldNode : MeasureFoundation.MetalNode {
    void capturedImageTextureCache;
    void capturedImageTextureCbCr;
    void capturedImageTextureY;
    void kCameraRotationThreshold;
    void lastCameraTransform;
    void scene;
    void worldPointsBuffer;
    void worldPointsBufferPtr;
    void worldPointsColorsBuffer;
    void worldPointsColorsBufferPtr;
    void worldPointsCurrentIndex;
    void worldPointsNum;
    void worldPointsPipelineState;
}

- (void)appDidEnterBackground;

@end
