
@interface STMutableVoiceControlStatusDomainData : STVoiceControlStatusDomainData <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long listeningState;
@property (readonly) Class superclass;
@property (getter=isVoiceControlActive, nonatomic) bool voiceControlActive;

- (bool)applyDiff:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setListeningState:(unsigned long long)arg1;
- (void)setVoiceControlActive:(bool)arg1;

@end
