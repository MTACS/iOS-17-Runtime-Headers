
@interface PDFBorderPrivateVars : NSObject {
    PDFAnnotation * annotation;
    long long  dashCount;
    NSArray * dashPattern;
    double * dashPatternRaw;
    double  hCornerRadius;
    double  lineWidth;
    long long  style;
    double  vCornerRadius;
}

- (void).cxx_destruct;

@end
