
@interface PDFPageViewPrivate : NSObject {
    PDFAnnotation * activeAnnotation;
    NSMutableDictionary * activeControls;
    NSTextStorage * activeTextStorage;
    PDFPageViewAnnotationController * annotationController;
    UIImage * backgroundImage;
    CALayer * backgroundLayer;
    int  backgroundQuality;
    CALayer * bookmarkLayer;
    struct CGSize { 
        double width; 
        double height; 
    }  bookmarkSize;
    PDFHighlightDetectedFormFieldsEffectLayer * detectedFormFieldBoundingBoxesLayer;
    NSObject<PDFPageLayerGeometryInterface> * geometryInterface;
    bool  isPerformingUndo;
    PDFPage * page;
    NSMutableArray * pageAnnotationEffects;
    CALayer<PDFPageLayerInterface> * pageLayer;
    NSMutableArray * pageSignatures;
    PDFRenderingProperties * renderingProperties;
    PDFPageLayerEffect * searchLayer;
    unsigned long long  visibilityDelegateIndex;
}

- (void).cxx_destruct;

@end
