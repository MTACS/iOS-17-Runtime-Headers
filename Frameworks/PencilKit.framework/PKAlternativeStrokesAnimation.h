
@interface PKAlternativeStrokesAnimation : NSObject {
    bool  _accepted;
    double  _crossFadeStartTime;
    double  _fadeDuration;
    bool  _forceDone;
    double  _originalStrokeDimmingFactor;
    PKShape * _shape;
    double  _startTime;
    NSArray * _strokes;
}

- (void).cxx_destruct;

@end
