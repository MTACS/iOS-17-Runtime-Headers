
@interface PDFAnnotationChangePrivate : NSObject {
    PDFAnnotation * annotation;
    unsigned long long  changeTimestamp;
    int  changeType;
}

- (void).cxx_destruct;

@end
