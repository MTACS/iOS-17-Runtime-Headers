
@interface SSRBiometricMatch : NSObject <BKDeviceDelegate> {
    BKDevice * _biometricDevice;
}

@property (nonatomic, retain) BKDevice *biometricDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_getLastBiometricMatchEvent:(bool*)arg1 atTime:(unsigned long long*)arg2;
- (id)biometricDevice;
- (unsigned long long)getLastBiometricMatchForVoiceTriggerTimeStamp:(unsigned long long)arg1;
- (id)init;
- (void)setBiometricDevice:(id)arg1;

@end
