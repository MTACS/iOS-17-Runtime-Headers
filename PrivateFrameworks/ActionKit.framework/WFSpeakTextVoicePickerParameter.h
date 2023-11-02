
@interface WFSpeakTextVoicePickerParameter : WFEnumerationParameter <WFActionEventObserver> {
    WFAction * _action;
}

@property (nonatomic) WFAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)action;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (id)defaultSerializedRepresentation;
- (bool)isHidden;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (id)selectedLanguageCode;
- (void)setAction:(id)arg1;

@end
