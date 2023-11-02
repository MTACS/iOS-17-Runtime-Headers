
@interface _SVXSystemEventMutation : NSObject <SVXSystemEventMutating> {
    unsigned int  _audioSessionID;
    SVXSystemEvent * _baseModel;
    SVXDeviceSetupFlowScene * _deviceSetupFlowScene;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasType : 1; 
        unsigned int hasTimestamp : 1; 
        unsigned int hasDeviceSetupFlowScene : 1; 
        unsigned int hasStoreDemo : 1; 
        unsigned int hasOrderedAlarmAndTimerIDs : 1; 
        unsigned int hasSpeechSynthesisRequest : 1; 
        unsigned int hasAudioSessionID : 1; 
    }  _mutationFlags;
    NSArray * _orderedAlarmAndTimerIDs;
    SVXSpeechSynthesisRequest * _speechSynthesisRequest;
    SVXStoreDemo * _storeDemo;
    unsigned long long  _timestamp;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setDeviceSetupFlowScene:(id)arg1;
- (void)setOrderedAlarmAndTimerIDs:(id)arg1;
- (void)setSpeechSynthesisRequest:(id)arg1;
- (void)setStoreDemo:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(long long)arg1;

@end
