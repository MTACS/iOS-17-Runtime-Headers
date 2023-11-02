
@interface CSVoiceTriggerEventInfoProvider : NSObject {
    NSMutableDictionary * _accessoryVoiceTriggerEvents;
    NSDictionary * _builtInVoiceTriggerEvent;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _rtsTriggerInfo;
    unsigned long long  _triggerNotifiedMachTime;
}

@property (nonatomic, copy) NSDictionary *rtsTriggerInfo;
@property (nonatomic) unsigned long long triggerNotifiedMachTime;

+ (bool)isVoiceTriggerInfoAvailableLocally:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_isBuiltInDeviceFromDeviceId:(id)arg1;
- (void)fetchVoiceTriggerInfoWithAudioContext:(id)arg1 resultVoiceTriggerInfo:(id*)arg2 resultRTSTriggerInfo:(id*)arg3;
- (id)init;
- (id)rtsTriggerInfo;
- (void)setRtsTriggerInfo:(id)arg1;
- (void)setTriggerNotifiedMachTime:(unsigned long long)arg1;
- (void)setVoiceTriggerInfo:(id)arg1 deviceId:(id)arg2;
- (unsigned long long)triggerNotifiedMachTime;

@end
