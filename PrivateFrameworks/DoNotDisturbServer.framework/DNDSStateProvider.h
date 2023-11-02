
@interface DNDSStateProvider : NSObject <DNDSStateProviding> {
    DNDState * _lastCalculatedState;
    DNDSStateProviderSystemSnapshot * _lastSystemSnapshot;
    DNDSModeConfigurationManager * _modeConfigurationManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) DNDState *lastCalculatedState;
@property (copy) DNDSStateProviderSystemSnapshot *lastSystemSnapshot;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithModeConfigurationManager:(id)arg1;
- (id)lastCalculatedState;
- (id)lastSystemSnapshot;
- (id)recalculateStateForSnapshot:(id)arg1;
- (void)setLastCalculatedState:(id)arg1;
- (void)setLastSystemSnapshot:(id)arg1;

@end
