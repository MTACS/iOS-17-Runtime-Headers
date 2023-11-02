
@interface SBHardwareButtonGestureParametersProviderBase : NSObject <BSDescriptionProviding, SBHardwareButtonGestureParametersProvider> {
    NSMapTable * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBHardwareButtonGestureParameters *hardwareButtonGestureParameters;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addHardwareButtonGestureParametersObserver:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)hardwareButtonGestureParameters;
- (id)observers;
- (void)publishUpdatedParameters:(id)arg1;
- (void)removeHardwareButtonGestureParametersObserver:(id)arg1;
- (void)setObservers:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
