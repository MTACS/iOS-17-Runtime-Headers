
@interface PDFAnnotationPrivateVars : NSObject {
    NSMutableDictionary * PDFAnnotationDictionary;
    NSDictionary * PDFAnnotationKeyMapping;
    PDFAccessibilityNode * accessibilityNode;
    PDFAKAnnotationAdaptor * akAnnotationAdaptor;
    <NSCopying> * akAnnotationForCopying;
    NSString * autoFillTextContentType;
    NSMutableDictionary * cachedAppearances;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  cachedAppearancesLock;
    struct CGPDFAnnotation { } * cgAnnotation;
    struct CGPath {} ** cgPaths;
    bool  constructingDictionaryRef;
    id  control;
    struct __CFDictionary { } * dictionaryRef;
    struct CGPDFForm { } * downAppearance;
    struct CGPDFForm { } * downOffAppearance;
    struct CGPoint { 
        double x; 
        double y; 
    }  endPoint;
    unsigned long long  formContentType;
    NSMutableDictionary * internalPDFAnnotationDictionary;
    bool  isAutofillNewContextStart;
    bool  isDetectedCheckbox;
    bool  isDetectedSignature;
    bool  isFullyConstructed;
    bool  isHighlighted;
    bool  isSelected;
    bool  isSignature;
    bool  isTransparent;
    NSLayoutManager * layoutManager;
    bool  loggingEnabled;
    struct CGPDFForm { } * normalAppearance;
    struct CGPDFForm { } * normalOffAppearance;
    PDFPage * page;
    PDFAnnotation * parent;
    NSLock * pathLock;
    NSUUID * pdfAnnotationUUID;
    bool  pointerIsOverAnnotation;
    PDFAnnotation * popup;
    struct CGPDFDictionary { } * popupDictionary;
    bool  popupDrawCloseWidget;
    bool  popupDrawText;
    NSArray * quadPoints;
    NSIndexSet * quadPointsIndexSet;
    struct CGPath { } * quadPointsPath;
    bool  restoreLinePoints;
    bool  restoreQuadPoints;
    struct CGPDFForm { } * rolloverAppearance;
    struct CGPDFForm { } * rolloverOffAppearance;
    bool  saveAppearance;
    double  scaleFactor;
    bool  shouldBurnIn;
    bool  shouldExport;
    bool  shouldHideInteractiveBackgroundColor;
    struct CGPDFDictionary { } * sourceDictionary;
    struct CGPoint { 
        double x; 
        double y; 
    }  startPoint;
    double  suggestedLineHeight;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  textInsets;
    NSTextStorage * textStorage;
    NSString * widgetOnStateString;
}

- (void).cxx_destruct;

@end
