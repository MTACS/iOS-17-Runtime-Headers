
@interface SiriSharedUIAnimationContext : NSObject {
    double  _animationDuration;
    unsigned long long  _animationOptions;
    CAMediaTimingFunction * _timingFunction;
}

@property (nonatomic) double animationDuration;
@property (nonatomic) unsigned long long animationOptions;
@property (nonatomic, retain) CAMediaTimingFunction *timingFunction;

- (void).cxx_destruct;
- (double)animationDuration;
- (unsigned long long)animationOptions;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationOptions:(unsigned long long)arg1;
- (void)setTimingFunction:(id)arg1;
- (id)timingFunction;

@end
