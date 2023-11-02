
@interface PDFAKAnnotationAdaptorPrivate : NSObject {
    AKAnnotation * akAnnotation;
    bool  isObservingAKAnnotation;
    bool  isSyncingFromAKAnnotation;
    bool  isSyncingFromPDFAnnotation;
    bool  isTornDown;
    PDFAnnotation * pdfAnnotation;
}

- (void).cxx_destruct;

@end
