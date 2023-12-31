
@interface PDFScrollViewPrivate : NSObject {
    PDFTimer * boundsUpdateTimer;
    PDFDocument * document;
    PDFDocumentView * documentView;
    bool  forcesTopAlignment;
    bool  isZooming;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  oldBounds;
    double  oldMagnification;
    NSDate * pageSyncDate;
    PDFView * pdfView;
    bool  scheduledPageSync;
}

- (void).cxx_destruct;

@end
