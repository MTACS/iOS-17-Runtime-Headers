
@interface ActivityRingsUI.SpringAnimation : NSObject {
    void animationState;
    void delay;
    void remainingDelay;
}

@property (nonatomic, readonly) double target;
@property (nonatomic, readonly) double value;

- (bool)advanceWithDeltaTime:(double)arg1;
- (void)completeWithSnap;
- (void)configureWithTension:(double)arg1 friction:(double)arg2 target:(double)arg3;
- (id)init;
- (id)initWithInitialValue:(double)arg1 delay:(double)arg2;
- (double)target;
- (void)updateTarget:(double)arg1;
- (double)value;

@end
