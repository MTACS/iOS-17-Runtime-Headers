
@interface PDFDocumentViewPrivate : NSObject {
    PDFDocumentContentView * contentView;
    PDFDocument * document;
    struct CGSize { 
        double width; 
        double height; 
    }  documentViewSize;
    bool  ignoreChangedBoundsForBoxNotification;
    PDFPageBackgroundManager * pageBackgroundManager;
    NSMutableDictionary * pageFrames;
    NSMutableDictionary * pageViews;
    PDFView * pdfView;
    PDFAnnotationPointerTrackingView * pointerTrackingView;
    PDFRenderingProperties * renderingProperties;
}

- (void).cxx_destruct;

@end
