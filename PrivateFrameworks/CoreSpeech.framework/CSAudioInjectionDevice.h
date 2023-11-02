
@interface CSAudioInjectionDevice : NSObject {
    NSString * _deviceID;
    NSString * _deviceName;
    long long  _deviceType;
    NSUUID * _deviceUID;
    bool  _enableAlwaysOnVoiceTrigger;
    CSAudioInjectionEngine * _injectionEngine;
    bool  _isConnected;
    NSString * _productIdentifier;
}

@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly) NSUUID *deviceUID;
@property (nonatomic) bool enableAlwaysOnVoiceTrigger;
@property (nonatomic) CSAudioInjectionEngine *injectionEngine;
@property (nonatomic) bool isConnected;
@property (nonatomic, readonly) bool isPluginDevice;
@property (nonatomic, readonly) NSString *productIdentifier;

- (void).cxx_destruct;
- (id)deviceID;
- (id)deviceName;
- (long long)deviceType;
- (id)deviceUID;
- (bool)enableAlwaysOnVoiceTrigger;
- (id)initWithDeviceType:(long long)arg1 deviceName:(id)arg2 deviceID:(id)arg3 productID:(id)arg4;
- (id)injectionEngine;
- (bool)isConnected;
- (bool)isPluginDevice;
- (id)productIdentifier;
- (void)setEnableAlwaysOnVoiceTrigger:(bool)arg1;
- (void)setInjectionEngine:(id)arg1;
- (void)setIsConnected:(bool)arg1;
- (bool)speakAudio:(id)arg1;
- (bool)speakAudio:(id)arg1 withScaleFactor:(float)arg2 outASBD:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg3 playbackStarted:(id /* block */)arg4 completion:(id /* block */)arg5;
- (bool)speakAudio:(id)arg1 withScaleFactor:(float)arg2 outASBD:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg3 playbackStarted:(id /* block */)arg4 userIntentOptions:(id)arg5 completion:(id /* block */)arg6;
- (bool)speakAudio:(id)arg1 withScaleFactor:(float)arg2 playbackStarted:(id /* block */)arg3 completion:(id /* block */)arg4;

@end
