
@interface CKMapBalloonView : CKTitledImageBalloonView {
    MKMarkerAnnotationView * _annotationView;
}

@property (nonatomic, retain) MKMarkerAnnotationView *annotationView;

- (void).cxx_destruct;
- (id)annotationView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAnnotationView:(id)arg1;

@end
