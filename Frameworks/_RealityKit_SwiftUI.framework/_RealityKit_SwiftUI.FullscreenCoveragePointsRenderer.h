
@interface _RealityKit_SwiftUI.FullscreenCoveragePointsRenderer : NSObject <MTKViewDelegate> {
    void $__lazy_storage_$_voxelRenderer;
    void backgroundColor;
    void commandQueue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  coveragePointCloud;
    void coveragePointCloudRenderer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  coveragePoints;
    void depthStencilState;
    void device;
    void dragGesture;
    void inFlightLock;
    void inFlightQueue;
    void objectToWorld;
    void objectToWorldUnscaled;
    void projection;
    void renderPrimitivePointsPipeline;
    void renderStyle;
    void sphereRadiusGain;
    void transformProvider;
    void turnTableCameraControl;
    void view;
    void viewToWorld;
    void viewportFOVDegs;
    void viewportSize;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)drawInMTKView:(id)arg1;
- (id)init;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize { double x1; double x2; })arg2;

@end
