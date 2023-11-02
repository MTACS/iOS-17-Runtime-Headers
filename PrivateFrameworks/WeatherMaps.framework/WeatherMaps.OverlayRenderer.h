
@interface WeatherMaps.OverlayRenderer : WeatherMaps.OverlayGenerator {
    void captureScope;
    void currentPixelTextureIndex;
    void delegate;
    void keyedTextures;
    void lastAnimationFrameIndex;
    void overlayDescriptor;
    void pixelDelegate;
    void pixelPointOfInterest;
    void pixelReaderInflightSemaphore;
    void pixelReaderTransformType;
    void pixelTextures;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  signposter;
    void tileCost;
    void viewportManager;
}

@end
