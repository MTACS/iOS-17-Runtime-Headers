
@interface CMADeviceMotionVisionFusionPlayer : NSObject {
    bool  _arSessionActive;
    bool  _fusionEnabled;
    bool  _playerActive;
    float  fMagneticDeclination;
    double  fMagneticDeclinationTimestamp;
    struct unique_ptr<CMVLFDeviceMotionFuser, std::default_delete<CMVLFDeviceMotionFuser>> { 
        struct __compressed_pair<CMVLFDeviceMotionFuser *, std::default_delete<CMVLFDeviceMotionFuser>> { 
            struct CMVLFDeviceMotionFuser {} *__value_; 
        } __ptr_; 
    }  fVLFDeviceMotionFuser;
}

@property (getter=isARSessionActive, nonatomic) bool arSessionActive;
@property (getter=isFusionEnabled, nonatomic) bool fusionEnabled;
@property (getter=isPlayerActive, nonatomic) bool playerActive;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getFusedDeviceMotionFrom:(id)arg1;
- (id)getFusedDeviceMotionFrom:(id)arg1 andAttitudeReferenceFrame:(unsigned long long)arg2;
- (id)init;
- (bool)isARSessionActive;
- (bool)isFusionEnabled;
- (bool)isPlayerActive;
- (float)magneticDeclination;
- (void)reset;
- (void)setArSessionActive:(bool)arg1;
- (void)setEnableFusion:(bool)arg1;
- (void)setFusionEnabled:(bool)arg1;
- (void)setPlayerActive:(bool)arg1;
- (void)start;
- (void)stop;
- (void)updateARSessionState:(unsigned long long)arg1;
- (void)updateLocation:(id)arg1;
- (void)updateVLLocalizationResult:(id)arg1;

@end
