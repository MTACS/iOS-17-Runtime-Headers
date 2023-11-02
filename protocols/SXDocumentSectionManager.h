
@protocol SXDocumentSectionManager <NSObject>

@required

- (void)applySectionBlueprint:(id <SXDocumentSectionBlueprint>)arg1 identifier:(NSString *)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 size:(struct CGSize { double x1; double x2; })arg4;
- (double)heightForBlueprint:(SXDocumentSectionBlueprint *)arg1 canvasSize:(struct CGSize { double x1; double x2; })arg2 traitCollection:(UITraitCollection *)arg3;

@end
