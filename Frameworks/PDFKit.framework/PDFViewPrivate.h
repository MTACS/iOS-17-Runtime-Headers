
@interface PDFViewPrivate : NSObject {
    unsigned long long  activeMarkupStyle;
    bool  allowsMarkupAnnotationEditing;
    bool  allowsUndo;
    PDFAnnotation * annotationOver;
    bool  autoScale;
    double  blockingWaitDuration;
    PDFCoachMarkManager * coachMarkManager;
    PDFViewController * controller;
    PDFSelection * currentSelection;
    bool  dataDetectorsEnabled;
    bool  debugDrawCGPDFNodeLayer;
    <PDFViewDelegate> * delegate;
    bool  delegateOrdersPageDrawing;
    bool  delegateRespondsToAllowFormFilling;
    bool  delegateRespondsToAllowFormFillingWithAutoFill;
    bool  delegateRespondsToAllowFormFillingWithConfidence;
    bool  delegateWillScale;
    NSMutableArray * destinationHistory;
    long long  displayDirection;
    long long  displayMode;
    bool  displaysAsBook;
    bool  displaysBookmarksForPages;
    bool  displaysPageBreaks;
    bool  displaysRTL;
    PDFDocument * document;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  documentMargins;
    struct CGPoint { 
        double x; 
        double y; 
    }  documentViewCenterBeforeRotation;
    PDFDocumentViewController * documentViewController;
    UITapGestureRecognizer * doubleTapGestureRecognizer;
    UIDragInteraction * dragInteraction;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  extensionViewBoundsInDocument;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  extensionViewFrame;
    double  extensionViewZoomScale;
    UIFindInteraction * findInteraction;
    unsigned long long  firstVisiblePage;
    bool  formFillingUpdatesAnnotationOnEveryTextChange;
    PDFPage * fromPage;
    double  gutterWide;
    NSArray * highlights;
    long long  historyIndex;
    double  horizontalScaleFactorBeforeRotation;
    bool  inFormFillingMode;
    bool  inhibitAutoScroll;
    bool  isUsingPageViewController;
    unsigned long long  lastHorizontalScrollDirection;
    unsigned long long  lastVerticalScrollDirection;
    unsigned long long  lastVisiblePage;
    UILongPressGestureRecognizer * longPressGestureRecognizer;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  pageBreakMargins;
    NSObject<OS_dispatch_queue> * pagePreloadQueue;
    PDFTimer * pageSyncTimer;
    NSDictionary * pageViewControllerOptions;
    PDFPasswordViewController * passwordViewController;
    PDFRenderingProperties * renderingProperties;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  savedSafeAreaInsets;
    bool  scaling;
    PDFScrollView * scrollView;
    bool  showsScrollIndicators;
    UITapGestureRecognizer * tapGestureRecognizer;
    bool  textSelectionEnabled;
    PDFTimer * tilesSyncTimer;
    PDFPage * toPage;
    PDFViewLayout * viewLayout;
    bool  wantsForceUpdate;
    double  zoomIncrement;
}

- (void).cxx_destruct;

@end
