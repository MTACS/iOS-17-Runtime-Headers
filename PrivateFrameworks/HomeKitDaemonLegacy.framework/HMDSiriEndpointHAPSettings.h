
@interface HMDSiriEndpointHAPSettings : HMFObject {
    NSNumber * _activeIdentifier;
    bool  _assistantsUpdated;
    NSNumber * _manuallyDisabled;
    NSNumber * _multifunctionButton;
    NSNumber * _siriEnable;
    NSString * _siriEndpointVersion;
    NSString * _siriEngineVersion;
    NSNumber * _siriLightOnUse;
    NSNumber * _siriListening;
    NSNumber * _siriTouchToUse;
}

@property (retain) NSNumber *activeIdentifier;
@property bool assistantsUpdated;
@property (retain) NSNumber *manuallyDisabled;
@property (retain) NSNumber *multifunctionButton;
@property (retain) NSNumber *siriEnable;
@property (retain) NSString *siriEndpointVersion;
@property (retain) NSString *siriEngineVersion;
@property (retain) NSNumber *siriLightOnUse;
@property (retain) NSNumber *siriListening;
@property (retain) NSNumber *siriTouchToUse;

- (void).cxx_destruct;
- (id)activeIdentifier;
- (bool)assistantsUpdated;
- (id)manuallyDisabled;
- (id)multifunctionButton;
- (void)setActiveIdentifier:(id)arg1;
- (void)setAssistantsUpdated:(bool)arg1;
- (void)setManuallyDisabled:(id)arg1;
- (void)setMultifunctionButton:(id)arg1;
- (void)setSiriEnable:(id)arg1;
- (void)setSiriEndpointVersion:(id)arg1;
- (void)setSiriEngineVersion:(id)arg1;
- (void)setSiriLightOnUse:(id)arg1;
- (void)setSiriListening:(id)arg1;
- (void)setSiriTouchToUse:(id)arg1;
- (id)siriEnable;
- (id)siriEndpointVersion;
- (id)siriEngineVersion;
- (id)siriLightOnUse;
- (id)siriListening;
- (id)siriTouchToUse;

@end
