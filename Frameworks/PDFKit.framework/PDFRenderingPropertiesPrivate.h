
@interface PDFRenderingPropertiesPrivate : NSObject {
    struct CGColorSpace { } * deviceColorSpace;
    long long  displayBox;
    bool  enableAccessibilityDrawing;
    bool  enableBackgroundImages;
    bool  enablePageShadows;
    bool  enableTileEdgeColoring;
    bool  enableTileUpdates;
    double  greekingThreshold;
    long long  interpolationQuality;
    bool  isUsingPDFExtensionView;
    double  lineWidthThreshold;
    UIColor * pageColor;
    PDFLayerController * pdfLayerController;
    PDFView * pdfView;
    double  screenScaleFactor;
    bool  shouldAntiAlias;
}

- (void).cxx_destruct;

@end
