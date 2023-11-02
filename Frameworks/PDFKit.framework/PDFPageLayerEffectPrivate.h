
@interface PDFPageLayerEffectPrivate : NSObject {
    PDFAnnotation * annotation;
    NSMutableDictionary * markupEffectLayers;
    PDFPageLayerEffect * noteLayer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  pageFrame;
    <PDFPageLayerInterface> * pageLayer;
    PDFScannerResult * pdfResult;
    CALayer * rootSelectionLayer;
    NSMutableDictionary * selectionEffectLayers;
    NSMutableArray * selections;
    bool  shouldRotateContent;
    NSUUID * uuid;
}

- (void).cxx_destruct;

@end
