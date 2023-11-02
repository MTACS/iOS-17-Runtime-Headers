
@interface _RealityKit_SwiftUI.CoveragePointRenderer : NSObject <MTKViewDelegate> {
    void $__lazy_storage_$_captureCircleRenderer;
    void $__lazy_storage_$_voxelRenderer;
    void backgroundColor;
    void cameraTransformProvider;
    void captureCircle;
    void captureDialOpacityFloor;
    void commandQueue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  coveragePointCloud;
    void coveragePointCloudRenderer;
    void depthStencilState;
    void device;
    void id;
    void inFlightLock;
    void inFlightQueue;
    void localTime;
    void motionGoodness;
    void projection;
    void renderPipelineState;
    void renderStyle;
    void reticleDeltaVector;
    void shouldRenderPointsWithAlphaBlend;
    void view;
    void viewToWorld;
    void viewportSize;
}

- (void).cxx_destruct;
- (void)drawInMTKView:(id)arg1;
- (id)init;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize { double x1; double x2; })arg2;

@end
