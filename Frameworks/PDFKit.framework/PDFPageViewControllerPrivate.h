
@interface PDFPageViewControllerPrivate : NSObject {
    UIImage * backgroundImage;
    int  backgroundQuality;
    double  maxScale;
    double  minScale;
    PDFPage * page;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  pageMargins;
    PDFPageView * pageView;
    PDFTextInputView * pageViewContainerView;
    PDFView * pdfView;
    PDFRenderingProperties * renderingProperties;
    UIScrollView * scrollView;
}

- (void).cxx_destruct;

@end
