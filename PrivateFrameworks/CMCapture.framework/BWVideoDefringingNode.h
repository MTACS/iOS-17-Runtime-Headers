
@interface BWVideoDefringingNode : BWNode {
    NSString * _cameraToDefringe;
    bool  _isSlomo;
    BWLimitedGMErrorLogger * _limitedGMErrorLogger;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    NSString * _portType;
    bool  _propagateSynchronizedSlaveFrame;
    NSString * _sensorIDString;
    FigVideoDefringingProcessor * _videoDefringingProcessor;
}

+ (void)initialize;

- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (id)initWithSensorIDString:(id)arg1 portType:(id)arg2 propagateSynchronizedSlaveFrame:(bool)arg3 isSlomo:(bool)arg4;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
