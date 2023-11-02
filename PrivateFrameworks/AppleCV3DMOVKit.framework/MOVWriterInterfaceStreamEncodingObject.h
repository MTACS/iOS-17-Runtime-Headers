
@interface MOVWriterInterfaceStreamEncodingObject : NSObject {
    float  _bitrate;
    float  _expectedFPS;
    NSDictionary * _extraConfigs;
    bool  _forceH264;
    bool  _lossless;
}

@property (nonatomic) float bitrate;
@property (nonatomic) float expectedFPS;
@property (nonatomic, retain) NSDictionary *extraConfigs;
@property (nonatomic) bool forceH264;
@property (nonatomic) bool lossless;

- (void).cxx_destruct;
- (float)bitrate;
- (float)expectedFPS;
- (id)extraConfigs;
- (bool)forceH264;
- (id)init;
- (id)initWithLossless:(bool)arg1 bitrate:(float)arg2 forceH264:(bool)arg3 expectedFPS:(float)arg4 extraConfigs:(id)arg5;
- (bool)lossless;
- (void)setBitrate:(float)arg1;
- (void)setExpectedFPS:(float)arg1;
- (void)setExtraConfigs:(id)arg1;
- (void)setForceH264:(bool)arg1;
- (void)setLossless:(bool)arg1;

@end
