
@protocol HDDrugInteractionFactorStateObserver

@required

- (void)drugInteractionFactorStateProvider:(id <HDDrugInteractionFactorStateProvider>)arg1 didObserveChangeForProfile:(HDProfile *)arg2 hasDrugInteractionFactor:(long long)arg3;

@end
