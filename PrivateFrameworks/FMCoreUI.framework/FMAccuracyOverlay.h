
@interface FMAccuracyOverlay : MKCircle {
    double  _horizontalAccuracy;
    <MKAnnotation> * _parentAnnotation;
}

@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) <MKAnnotation> *parentAnnotation;

- (void).cxx_destruct;
- (id)description;
- (double)horizontalAccuracy;
- (id)parentAnnotation;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setParentAnnotation:(id)arg1;

@end
