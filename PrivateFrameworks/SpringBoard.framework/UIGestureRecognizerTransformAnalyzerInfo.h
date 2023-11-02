
@interface UIGestureRecognizerTransformAnalyzerInfo : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _absoluteTranslation;
    double  _rotation;
    double  _scale;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translation;
    double  _translationMagnitude;
}

@property (setter=_setAbsoluteTranslation:, nonatomic) struct CGPoint { double x1; double x2; } absoluteTranslation;
@property (setter=_setRotation:, nonatomic) double rotation;
@property (setter=_setScale:, nonatomic) double scale;
@property (setter=_setTranslation:, nonatomic) struct CGPoint { double x1; double x2; } translation;
@property (setter=_setTranslationMagnitude:, nonatomic) double translationMagnitude;

- (void)_reset;
- (void)_setAbsoluteTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setRotation:(double)arg1;
- (void)_setScale:(double)arg1;
- (void)_setTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setTranslationMagnitude:(double)arg1;
- (struct CGPoint { double x1; double x2; })absoluteTranslation;
- (id)description;
- (double)rotation;
- (double)scale;
- (struct CGPoint { double x1; double x2; })translation;
- (double)translationMagnitude;

@end
