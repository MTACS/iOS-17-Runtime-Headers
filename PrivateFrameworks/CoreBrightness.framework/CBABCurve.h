
@interface CBABCurve : NSObject {
    NSObject<OS_os_log> * _logHandle;
    float  _scaleFactor;
    unsigned long long  _version;
    float  currentLux;
    float  mappedBrightness;
    struct { 
        float minimumBrightness; 
        float maximumBrightness; 
        float bl1; 
        float bl2; 
        float e1; 
        float e2; 
        float eThresh; 
    }  pref;
}

@property float scaleFactor;
@property (readonly) unsigned long long version;

- (id)copyUserPrefState;
- (id)description;
- (float)getLinearBrightness;
- (float)getLux;
- (float)getScaledBL1;
- (float)getScaledBL2;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (id)initWithUUID:(id)arg1 vendorID:(id)arg2 andProductID:(id)arg3;
- (void)resetToDefaultState;
- (float)scaleFactor;
- (void)setLinearBrightnessMin:(float)arg1 andMax:(float)arg2;
- (bool)setLux:(float)arg1;
- (void)setSavedPrefences:(id)arg1;
- (void)setScaleFactor:(float)arg1;
- (void)setScaledBL1:(float)arg1;
- (void)setScaledBL2:(float)arg1;
- (void)updateALSParametersForDisplayBrightness:(float)arg1;
- (unsigned long long)version;

@end
