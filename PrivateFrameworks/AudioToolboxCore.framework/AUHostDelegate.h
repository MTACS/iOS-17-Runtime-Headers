
@interface AUHostDelegate : NSObject <AUAudioUnitHostProtocol> {
    AUAudioUnit * _audioUnit;
    NSObject<OS_dispatch_queue> * mParameterQueue;
}

@property (nonatomic) AUAudioUnit *audioUnit;

- (void).cxx_destruct;
- (void)MIDICIProfileChanged:(unsigned char)arg1 channel:(unsigned char)arg2 profile:(id)arg3 enabled:(bool)arg4;
- (id)audioUnit;
- (id)init;
- (void)propertiesChanged:(id)arg1;
- (void)setAudioUnit:(id)arg1;
- (void)speechSynthesisMetadataAvailable:(id)arg1 speechRequest:(id)arg2;
- (void)syncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned int)arg5;

@end
