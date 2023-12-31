
@protocol WebDocumentSelection <WebDocumentText>

@required

- (struct CGImage { }*)selectionImageForcingBlackText:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionImageRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionRect;
- (NSArray *)selectionTextRects;
- (WAKView *)selectionView;

@end
