
@interface CPAnnotation : CPGraphicObject {
    struct CGPDFAnnotation { } * _cgAnnotation;
}

@property struct CGPDFAnnotation { }*cgAnnotation;

- (struct CGPDFAnnotation { }*)cgAnnotation;
- (void)dealloc;
- (id)initWithCGPDFAnnotation:(struct CGPDFAnnotation { }*)arg1;
- (void)setCgAnnotation:(struct CGPDFAnnotation { }*)arg1;

@end
