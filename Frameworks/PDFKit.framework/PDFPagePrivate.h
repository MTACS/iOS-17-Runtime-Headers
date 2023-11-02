
@interface PDFPagePrivate : NSObject {
    bool  akDidSetupRealPageModelController;
    PDFAKPageAdaptor * akPageAdaptor;
    NSMutableArray * annotationChanges;
    NSMutableArray * annotations;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  artBox;
    NSAttributedString * attributedString;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  bleedBox;
    bool  bookmarked;
    _Atomic bool  builtLayout;
    BOOL  candidateForFormDetection;
    BOOL  candidateForOCR;
    NSMutableSet * changedAnnotations;
    bool  colorWidgetBackgrounds;
    NSMutableArray * createDisplayListCompletionBlocks;
    bool  creatingDisplayList;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  cropBox;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  dataDetectorsLock;
    NSMutableArray * detectedAnnotations;
    PDFDetectedForm * detectedForm;
    unsigned long long  detectedFormFieldsRecognitionConfidence;
    bool  didChangeBounds;
    bool  didPerformFormDetection;
    bool  didPerformOCR;
    struct CGDisplayList { } * displayList;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  displayListMutex;
    bool  displaysAnnotations;
    bool  displaysMarkups;
    PDFDocument * document;
    NSMutableArray * formFieldGroups;
    bool  isFullyConstructed;
    NSString * label;
    struct CGPDFLayout { } * layout;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  layoutLock;
    _Atomic bool  loadedAnnotations;
    NSLock * lock_accessAnnotations;
    NSLock * lock_getAnnotations;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mediaBox;
    struct CGPDFPage { } * page;
    struct CGColor { } * pageBackgroundColorHint;
    struct CGImage { } * pageImage;
    NSDictionary * pageImageOptions;
    NSMutableDictionary * persistentApplicationData;
    bool  ranDataDetectors;
    bool  requestedOCR;
    long long  rotation;
    NSMutableArray * scannerResults;
    NSString * text;
    bool  textFromOCR;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  trimBox;
    PDFView * view;
    NSMutableDictionary * widgetAnnotationLookup;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  widgetAnnotationLookupLock;
}

- (void).cxx_destruct;

@end
