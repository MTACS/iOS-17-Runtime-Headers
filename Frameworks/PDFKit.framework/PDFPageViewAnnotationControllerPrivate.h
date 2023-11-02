
@interface PDFPageViewAnnotationControllerPrivate : NSObject {
    PDFAnnotation * activeAnnotation;
    NSMutableDictionary * activeControls;
    PDFPage * page;
    PDFPageView * pageView;
    PDFView * view;
}

- (void).cxx_destruct;

@end
