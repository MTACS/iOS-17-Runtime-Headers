
@interface CSActivationEvent : NSObject {
    NSString * _UUID;
    NSDictionary * _activationInfo;
    NSString * _deviceId;
    unsigned long long  _hosttime;
    unsigned long long  _type;
    float  _vadScore;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) NSDictionary *activationInfo;
@property (nonatomic, readonly) NSString *deviceId;
@property (nonatomic, readonly) unsigned long long hosttime;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) float vadScore;

+ (id)builtInMicVoiceTriggerEvent:(id)arg1 hostTime:(unsigned long long)arg2;
+ (id)jarvisVoiceTriggerEvent:(id)arg1 activationInfo:(id)arg2 hostTime:(unsigned long long)arg3;
+ (id)mediaserverdLaunchedEvent:(unsigned long long)arg1;
+ (id)remoraVoiceTriggerEvent:(id)arg1 activationInfo:(id)arg2 hostTime:(unsigned long long)arg3;
+ (id)remoraVoiceTriggerEvent:(id)arg1 hostTime:(unsigned long long)arg2;
+ (id)remoteMicVADEvent:(id)arg1 vadScore:(float)arg2 hostTime:(unsigned long long)arg3;
+ (id)remoteMicVoiceTriggerEvent:(id)arg1 activationInfo:(id)arg2 hostTime:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)UUID;
- (id)_activationTypeString;
- (id)activationInfo;
- (id)deviceId;
- (unsigned long long)hosttime;
- (id)initWithType:(unsigned long long)arg1 deviceId:(id)arg2 activationInfo:(id)arg3 hosttime:(unsigned long long)arg4;
- (id)initWithType:(unsigned long long)arg1 deviceId:(id)arg2 activationInfo:(id)arg3 vadScore:(float)arg4 hosttime:(unsigned long long)arg5;
- (id)initWithXPCObject:(id)arg1;
- (id)localizedDescription;
- (unsigned long long)type;
- (float)vadScore;
- (id)xpcObject;

@end
