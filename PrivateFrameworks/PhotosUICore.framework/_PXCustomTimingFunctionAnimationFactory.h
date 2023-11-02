
@interface _PXCustomTimingFunctionAnimationFactory : NSObject <_UIBasicAnimationFactory> {
    CAMediaTimingFunction * _timingFunction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CAMediaTimingFunction *timingFunction;

+ (id)factoryWithTimingFunction:(id)arg1;

- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2;
- (id)timingFunction;

@end
