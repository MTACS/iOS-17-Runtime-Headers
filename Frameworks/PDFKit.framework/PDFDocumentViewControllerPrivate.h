
@interface PDFDocumentViewControllerPrivate : NSObject {
    PDFPageViewController * activePageView;
    bool  displaysRTL;
    double  maxScale;
    double  minScale;
    PDFPageBackgroundManager * pageBackgroundManager;
    PDFView * pdfView;
    PDFRenderingProperties * renderingProperties;
    UIScrollView * scrollView;
    NSHashTable * weakPageViewControllers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  weakPageViewControllersLock;
}

- (void).cxx_destruct;

@end
