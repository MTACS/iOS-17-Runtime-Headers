
@interface CBChromaticCorrectionParams : NSObject {
    float  _aodRampDuration;
    NSObject<OS_os_log> * _log;
    float  _luxActivationThreshold;
    CBFloatArray * _luxTable;
    float * _luxTableOG;
    unsigned long long  _luxTableSizeOG;
    float  _nitsActivationThreshold;
    CBFloatArray * _nitsTable;
    float * _nitsTableOG;
    unsigned long long  _nitsTableSizeOG;
    CBFloatArray * _rampBezierAnchors;
    float * _rampBezierAnchorsOG;
    float  _rampDownDuration;
    float  _rampDownLuxDeltaThreshold;
    float  _rampUpDuration;
    float  _rampUpLuxDeltaThreshold;
    float  _rampUpdateRate;
    float  _rampUpdateRateOG;
    CBFloatArray2D * _strengthTable;
    float * _strengthTableOG;
    unsigned long long  _strengthTableSizeOG;
}

@property (readonly) float aodRampDuration;
@property (readonly) float luxActivationThreshold;
@property (readonly) CBFloatArray *luxTable;
@property (readonly) float nitsActivationThreshold;
@property (readonly) CBFloatArray *nitsTable;
@property (readonly) CBFloatArray *rampBezierAnchors;
@property (readonly) float rampDownDuration;
@property (readonly) float rampDownLuxDeltaThreshold;
@property (readonly) float rampUpDuration;
@property (readonly) float rampUpLuxDeltaThreshold;
@property (readonly) float rampUpdateRate;
@property (readonly) CBFloatArray2D *strengthTable;

- (float)aodRampDuration;
- (void)dealloc;
- (float)getStrengthForRow:(unsigned long long)arg1 andColumn:(unsigned long long)arg2;
- (bool)initAmmoliteFromServiceOG:(unsigned int)arg1;
- (id)initFromAmmoliteFromService:(unsigned int)arg1;
- (id)initFromTwilightFromService:(unsigned int)arg1;
- (bool)initFromTwilightFromServiceOG:(unsigned int)arg1;
- (float)luxActivationThreshold;
- (id)luxTable;
- (float)nitsActivationThreshold;
- (id)nitsTable;
- (id)rampBezierAnchors;
- (float)rampDownDuration;
- (float)rampDownLuxDeltaThreshold;
- (float)rampUpDuration;
- (float)rampUpLuxDeltaThreshold;
- (float)rampUpdateRate;
- (id)strengthTable;

@end
