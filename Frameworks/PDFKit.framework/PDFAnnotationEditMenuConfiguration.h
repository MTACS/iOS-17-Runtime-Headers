
@interface PDFAnnotationEditMenuConfiguration : UIEditMenuConfiguration {
    PDFAnnotation * _annotation;
}

@property (retain) PDFAnnotation *annotation;

+ (id)configurationWithIdentifier:(id)arg1 sourcePoint:(struct CGPoint { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (id)annotation;
- (void)setAnnotation:(id)arg1;

@end
