
@interface CBColorPolicyFilter : CBFilter {
    CBStack * _alsStack;
    float  _ceConfidenceThreshold;
    bool  _ceEnabled;
    float  _ceMitigationThrE;
    float  _ceMitigationThrL;
    int  _ceMitigationThrSize;
    CBCEModule * _ceModule;
    unsigned long long  _consecutiveNonMitgatedCount;
    CBHIDEvent * _filteredALS;
    float  _filteredStrength;
    bool  _isColorMitigationTriggered;
    float * _mitigatedStrengthLUT;
    float  _mitigationThrE;
    float  _mitigationThrL;
    int  _mitigationThrSize;
    bool  _mitigationUsedYet;
    unsigned long long  _stackCurrentCount;
    unsigned long long  _stackLength;
}

@property (nonatomic, readonly) CBHIDEvent *filteredALS;
@property float filteredStrength;
@property bool isColorMitigationTriggered;

- (float)biLinearInterpBetweenIndices:(char *)arg1 forPoint1:(float)arg2 andPoint2:(float)arg3;
- (float)computeBaselineStrengthForLux:(float)arg1 andNits:(float)arg2;
- (id)copyPropertyForKey:(id)arg1;
- (void)dealloc;
- (id)filterEvent:(id)arg1;
- (id)filteredALS;
- (float)filteredStrength;
- (id)handleALSEvent:(id)arg1;
- (id)initWithID:(unsigned int)arg1;
- (void)initializeMitigationsForDevice:(unsigned int)arg1;
- (float)interpolateBetweenX1:(float)arg1 Y1:(float)arg2 X2:(float)arg3 Y2:(float)arg4 X:(float)arg5;
- (bool)isColorMitigationTriggered;
- (void)resetFilter;
- (bool)sampleIsFromCERegion:(id)arg1;
- (bool)sampleIsFromMitigatedRegion:(id)arg1;
- (void)setFilteredStrength:(float)arg1;
- (void)setIsColorMitigationTriggered:(bool)arg1;
- (void)setModuleObject:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (bool)shouldMitigateForSample:(id)arg1 withLuxThr:(float*)arg2 NitsThr:(float*)arg3 andSize:(int)arg4;

@end
