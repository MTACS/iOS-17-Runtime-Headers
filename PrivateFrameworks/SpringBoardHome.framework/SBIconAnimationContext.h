
@interface SBIconAnimationContext : NSObject {
    id /* block */  _completion;
    double  _delay;
    double  _fraction;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) double delay;
@property (nonatomic) double fraction;

- (void).cxx_destruct;
- (id /* block */)completion;
- (double)delay;
- (double)fraction;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDelay:(double)arg1;
- (void)setFraction:(double)arg1;

@end
