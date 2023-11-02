
@interface PDFKitTextViewPrivate : NSObject {
    PDFAnnotation * annotation;
    PDFPageView * pdfPageView;
    PDFView * pdfView;
    PDFTextWidgetTextView * textView;
    UIView * topLevelView;
}

- (void).cxx_destruct;

@end
