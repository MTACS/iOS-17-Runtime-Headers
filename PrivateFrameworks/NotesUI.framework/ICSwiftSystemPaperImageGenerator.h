
@interface ICSwiftSystemPaperImageGenerator : ICSystemPaperImageGenerator {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  cachedPaper;
    void document;
}

@property (nonatomic, readonly) bool hasDeepLink;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } paperContentBounds;

- (void).cxx_destruct;
- (bool)drawPaperInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)hasDeepLink;
- (void)imageWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 completion:(id /* block */)arg2;
- (id)imageWithFullResolution:(bool)arg1 inverted:(bool)arg2;
- (id)initWithPaperAttachment:(id)arg1 useActivePaper:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paperContentBounds;

@end
