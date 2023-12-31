
@interface NUAnimationFactory : NSObject <_UIBasicAnimationFactory> {
    CAMediaTimingFunction * _mediaTimingFunction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CAMediaTimingFunction *mediaTimingFunction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;
- (id)initWithMediaTimingFunction:(id)arg1;
- (id)mediaTimingFunction;

@end
