
@interface WFGetTravelTimeAction : WFAction

+ (unsigned long long)transportTypeFromString:(id)arg1;

- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)getMapItemFromCollection:(id)arg1 parameterKey:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)isStartOrDestinationCurrentLocation;
- (id)outputContentClasses;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;

@end
