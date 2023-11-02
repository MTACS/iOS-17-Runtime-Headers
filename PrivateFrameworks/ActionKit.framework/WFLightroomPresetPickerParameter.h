
@interface WFLightroomPresetPickerParameter : WFEnumerationParameter <WFActionEventObserver> {
    WFAction * _action;
    NSArray * _possibleStates;
}

@property (nonatomic) WFAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *possibleStates;
@property (readonly) Class superclass;

+ (id)presetsByGroup;

- (void).cxx_destruct;
- (id)action;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (bool)isHidden;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (void)possibleStatesDidChange;
- (void)setAction:(id)arg1;
- (Class)singleStateClass;

@end
