
@protocol SBFThermalConditionObserver <NSObject>

@required

- (void)thermalBlockStatusChanged:(id <SBFThermalBlockProvider>)arg1;

@end
