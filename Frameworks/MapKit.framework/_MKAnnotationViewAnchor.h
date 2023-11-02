
@interface _MKAnnotationViewAnchor : VKAnchorWrapper {
    MKAnnotationView * _annotationView;
}

@property (nonatomic) MKAnnotationView *annotationView;

- (id)annotationView;
- (struct { double x1; double x2; })coordinate;
- (struct CGPoint { double x1; double x2; })pointInLayer:(id)arg1 bound:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)pointOffsetForDistanceOffset:(double)arg1;
- (void)setAnnotationView:(id)arg1;

@end
