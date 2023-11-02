
@interface SVXSystemEvent : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _audioSessionID;
    SVXDeviceSetupFlowScene * _deviceSetupFlowScene;
    NSArray * _orderedAlarmAndTimerIDs;
    SVXSpeechSynthesisRequest * _speechSynthesisRequest;
    SVXStoreDemo * _storeDemo;
    unsigned long long  _timestamp;
    long long  _type;
}

@property (nonatomic, readonly) unsigned int audioSessionID;
@property (nonatomic, readonly, copy) SVXDeviceSetupFlowScene *deviceSetupFlowScene;
@property (nonatomic, readonly, copy) NSArray *orderedAlarmAndTimerIDs;
@property (nonatomic, readonly, copy) SVXSpeechSynthesisRequest *speechSynthesisRequest;
@property (nonatomic, readonly, copy) SVXStoreDemo *storeDemo;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, readonly) long long type;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (unsigned int)audioSessionID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceSetupFlowScene;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 timestamp:(unsigned long long)arg2;
- (id)initWithType:(long long)arg1 timestamp:(unsigned long long)arg2 alarm:(id)arg3;
- (id)initWithType:(long long)arg1 timestamp:(unsigned long long)arg2 alarm:(id)arg3 deviceSetupFlowScene:(id)arg4;
- (id)initWithType:(long long)arg1 timestamp:(unsigned long long)arg2 deviceSetupFlowScene:(id)arg3;
- (id)initWithType:(long long)arg1 timestamp:(unsigned long long)arg2 deviceSetupFlowScene:(id)arg3 storeDemo:(id)arg4 orderedAlarmAndTimerIDs:(id)arg5;
- (id)initWithType:(long long)arg1 timestamp:(unsigned long long)arg2 deviceSetupFlowScene:(id)arg3 storeDemo:(id)arg4 orderedAlarmAndTimerIDs:(id)arg5 audioSessionID:(unsigned int)arg6;
- (id)initWithType:(long long)arg1 timestamp:(unsigned long long)arg2 deviceSetupFlowScene:(id)arg3 storeDemo:(id)arg4 orderedAlarmAndTimerIDs:(id)arg5 speechSynthesisRequest:(id)arg6 audioSessionID:(unsigned int)arg7;
- (id)initWithType:(long long)arg1 timestamp:(unsigned long long)arg2 storeDemo:(id)arg3;
- (id)initWithType:(long long)arg1 timestamp:(unsigned long long)arg2 timer:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)orderedAlarmAndTimerIDs;
- (id)speechSynthesisRequest;
- (id)storeDemo;
- (unsigned long long)timestamp;
- (long long)type;

@end
