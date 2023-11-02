
@interface PDFHostViewControllerPrivate : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  bottomRightSelectionPoint;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  contentInset;
    long long  currentPageIndex;
    struct CGPoint { 
        double x; 
        double y; 
    }  documentViewCenter;
    struct CGSize { 
        double width; 
        double height; 
    }  documentViewSize;
    UITapGestureRecognizer * doubleTapGestureRecognizer;
    NSExtension * extension;
    <PDFExtensionProtocol> * extensionProxy;
    bool  hasSelection;
    double  horizontalScaleFactor;
    UIScrollView * hostScrollView;
    bool  hostScrollViewObserverIsActive;
    <PDFHostViewControllerDelegate> * hostViewControllerDelegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  insetBoundsInDocument;
    bool  isUnlocked;
    UILongPressGestureRecognizer * longPressGestureRecognizer;
    double  maxScaleFactor;
    double  minScaleFactor;
    long long  pageCount;
    PDFPageLabelView * pageLabelView;
    PDFPanGestureRecognizer * panGestureRecognizer;
    NSString * password;
    PDFPasswordViewController * passwordViewController;
    id /* block */  pdfPointerCompletionHandler;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  pdfSafeAreaInsets;
    bool  pdfViewIsRotating;
    bool  pdfViewNeedsUpdate;
    UIPointerInteraction * pointerInteraction;
    bool  recentGestureIsIndirectTouch;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  scrollViewFrame;
    id /* block */  snapshotCompletion;
    UITapGestureRecognizer * tapGestureRecognizer;
    struct CGPoint { 
        double x; 
        double y; 
    }  topLeftSelectionPoint;
    PDFExtensionTopView * topView;
}

- (void).cxx_destruct;

@end
