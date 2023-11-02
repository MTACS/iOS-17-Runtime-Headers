
@interface UIAnimation : NSObject {
    SEL  _action;
    struct { 
        unsigned int curve : 4; 
    }  _animationFlags;
    id /* block */  _completion;
    id  _delegate;
    double  _duration;
    UIScreen * _screen;
    NSString * _screenIdentifier;
    double  _startTime;
    int  _state;
    id  _target;
}

- (void).cxx_destruct;
- (id)_screen;
- (id)_screenIdentifier;
- (SEL)action;
- (id /* block */)completion;
- (id)delegate;
- (float)fractionForTime:(double)arg1;
- (id)initWithTarget:(id)arg1;
- (void)markStart:(double)arg1;
- (void)markStop;
- (float)progressForFraction:(float)arg1;
- (void)setAction:(SEL)arg1;
- (void)setAnimationCurve:(int)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setProgress:(float)arg1;
- (int)state;
- (void)stopAnimation;
- (id)target;

@end
