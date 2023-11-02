
@interface VCSwitchManager : NSObject {
    unsigned int  _localSwitches;
    unsigned int  _negotiatedSwitches;
    unsigned int  _remoteSwitches;
}

@property unsigned int localSwitches;
@property unsigned int negotiatedSwitches;
@property unsigned int remoteSwitches;

- (unsigned int)applyNegotiationRulesUsingLocalSwitches:(unsigned int)arg1 negotiatedSwitches:(unsigned int)arg2;
- (id)description;
- (void)initializeLocalSwitches;
- (bool)isLocalSwitchEnabled:(unsigned int)arg1;
- (bool)isSwitchEnabled:(unsigned int)arg1;
- (unsigned int)localSwitches;
- (void)negotiateSwitches;
- (void)negotiateSwitchesForIsCaller:(bool)arg1;
- (unsigned int)negotiatedSwitches;
- (unsigned int)remoteSwitches;
- (void)setLocalSwitches:(unsigned int)arg1;
- (void)setNegotiatedSwitches:(unsigned int)arg1;
- (void)setRemoteSwitches:(unsigned int)arg1;
- (void)setRemoteSwitches:(unsigned int)arg1 isCaller:(bool)arg2;
- (void)setupLocalABTestSwitches;
- (void)setupLocalAudioTestGroupSwitches;
- (void)setupLocalDuplicationTestGroupSwitches;
- (void)setupLocalNetworkTestGroupSwitches;
- (void)setupLocalOnOffSwitches;
- (void)setupLocalOnOffSwitchesFromMasterSwitch;
- (void)setupLocalRateControlTestGroupSwitches;
- (void)setupLocalSwitchesIndividually;
- (void)setupLocalVideoTestGroupSwitches;
- (void)updateDuplicationEnhancementSwitches;

@end
