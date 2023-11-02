
@interface CBTwilightNightShiftAdaptationParams : NSObject {
    CBFloatArray2D * _cctDeltaTable;
    float * _cctDeltaTableOG;
    unsigned long long  _cctDeltaTableSizeOG;
    CBFloatArray * _cctTable;
    float * _cctTableOG;
    unsigned long long  _cctTableSizeOG;
    NSObject<OS_os_log> * _log;
    CBFloatArray * _twilightStrengthTable;
    float * _twilightStrengthTableOG;
    unsigned long long  _twilightStrengthTableSizeOG;
}

@property (readonly) CBFloatArray2D *cctDeltaTable;
@property (readonly) CBFloatArray *cctTable;
@property (readonly) CBFloatArray *twilightStrengthTable;

- (id)cctDeltaTable;
- (id)cctTable;
- (void)dealloc;
- (id)initWithService:(unsigned int)arg1;
- (bool)loadParametersFromService:(unsigned int)arg1;
- (id)twilightStrengthTable;

@end
