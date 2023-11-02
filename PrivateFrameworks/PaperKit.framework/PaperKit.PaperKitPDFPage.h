
@interface PaperKit.PaperKitPDFPage : PDFPage {
    void annotationIDState;
    void appearanceStreamAnnotations;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  pageId;
    void render;
}

@property (nonatomic, readonly) NSArray *annotations;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (Class)annotationSubclassForSubtype:(id)arg1;
- (id)annotations;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2 withOptions:(id)arg3;
- (id)init;
- (id)initWithImage:(id)arg1 options:(id)arg2;

@end
