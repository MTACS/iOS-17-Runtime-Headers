
@interface PKFadeOutStrokeAnimation : NSObject {
    double  _duration;
    UIColor * _startColor;
    double  _startTime;
    PKStroke * _stroke;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) PKStroke *stroke;

- (void).cxx_destruct;
- (double)duration;
- (id)initWithStroke:(id)arg1 startTime:(double)arg2 duration:(double)arg3;
- (bool)isDoneAtTime:(double)arg1;
- (id)newStrokeAtTime:(double)arg1;
- (double)startTime;
- (id)stroke;

@end
