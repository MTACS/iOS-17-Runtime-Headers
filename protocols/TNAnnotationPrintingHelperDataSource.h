
@protocol TNAnnotationPrintingHelperDataSource

@required

- (NSString *)addendumPageTitleOfAnnotationPrintingHelper:(TNAnnotationPrintingHelper *)arg1;
- (void)annotationPrintingHelper:(void *)arg1 enumerateLayoutsByPageWithBlock:(void *)arg2; // needs 2 arg types, found 7: TNAnnotationPrintingHelper *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })annotationPrintingHelper:(TNAnnotationPrintingHelper *)arg1 inversePureTransformInRootForContentAtPageIndex:(unsigned long long)arg2;
- (NSArray *)annotationPrintingHelper:(TNAnnotationPrintingHelper *)arg1 layoutsForPageIndex:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })availableRectForAddendumContentOfAnnotationPrintingHelper:(TNAnnotationPrintingHelper *)arg1;
- (double)contentScaleOfAnnotationPrintingHelper:(TNAnnotationPrintingHelper *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForAddendumContentOfAnnotationPrintingHelper:(TNAnnotationPrintingHelper *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForFlagContentOfAnnotationPrintingHelper:(TNAnnotationPrintingHelper *)arg1;
- (bool)shouldPrintCommentsOfAnnotationPrintingHelper:(TNAnnotationPrintingHelper *)arg1;

@end
