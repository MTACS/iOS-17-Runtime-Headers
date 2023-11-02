
@interface PKUISpringAnimationFactory : PKSpringAnimationFactory <_UIBasicAnimationFactory> {
    id /* block */  _animationDelayHandler;
    double  _maximumVendedDelay;
}

@property (nonatomic, copy) id /* block */ animationDelayHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double maximumVendedDelay;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_springAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;
- (id /* block */)animationDelayHandler;
- (id)highFrameRateSpringAnimationForView:(id)arg1 withKeyPath:(id)arg2 reason:(unsigned short)arg3;
- (double)maximumVendedDelay;
- (void)setAnimationDelayHandler:(id /* block */)arg1;
- (id)springAnimationForView:(id)arg1 withKeyPath:(id)arg2;

@end
