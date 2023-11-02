
@interface UIAnimatorScreenLink : NSObject {
    unsigned short  _animationCount;
    CADisplayLink * _displayLink;
    id /* block */  _updateAction;
    struct _UIUpdateSequenceItemInternal { } * _updateSequenceItem;
}

@property unsigned short animationCount;

+ (id)startTimerWithScreen:(id)arg1 action:(id /* block */)arg2;

- (void).cxx_destruct;
- (unsigned short)animationCount;
- (void)dealloc;
- (void)invalidate;
- (void)onDisplayLink:(id)arg1;
- (void)setAnimationCount:(unsigned short)arg1;

@end
