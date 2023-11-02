
@interface RPTDockGestureInteraction : NSObject <RPTInteraction> {
    double  _amplitude;
    unsigned long long  _gestureStyle;
}

@property (nonatomic) double amplitude;
@property (nonatomic) unsigned long long gestureStyle;

- (double)amplitude;
- (unsigned long long)gestureStyle;
- (id)initWithGestureStyle:(unsigned long long)arg1;
- (id)interactionByScalingBy:(double)arg1;
- (void)invokeWithComposer:(id)arg1 duration:(double)arg2;
- (id)reversedInteraction;
- (void)setAmplitude:(double)arg1;
- (void)setGestureStyle:(unsigned long long)arg1;

@end
