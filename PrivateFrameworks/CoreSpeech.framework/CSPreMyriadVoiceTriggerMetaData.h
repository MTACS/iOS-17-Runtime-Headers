
@interface CSPreMyriadVoiceTriggerMetaData : NSObject {
    NSString * _deviceId;
    float  _firstPassMyriadGoodnessScore;
    bool  _isSecondPassRunning;
}

@property (nonatomic, retain) NSString *deviceId;
@property (nonatomic) float firstPassMyriadGoodnessScore;
@property (nonatomic) bool isSecondPassRunning;

- (void).cxx_destruct;
- (id)deviceId;
- (float)firstPassMyriadGoodnessScore;
- (id)init;
- (bool)isSecondPassRunning;
- (void)setDeviceId:(id)arg1;
- (void)setFirstPassMyriadGoodnessScore:(float)arg1;
- (void)setIsSecondPassRunning:(bool)arg1;

@end
