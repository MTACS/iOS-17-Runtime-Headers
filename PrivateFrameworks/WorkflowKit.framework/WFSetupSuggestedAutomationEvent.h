
@interface WFSetupSuggestedAutomationEvent : WFEvent {
    bool  _completed;
    unsigned int  _currentStep;
    NSString * _key;
    NSString * _suggestedAutomationIdentifier;
}

@property (nonatomic) bool completed;
@property (nonatomic) unsigned int currentStep;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *suggestedAutomationIdentifier;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (bool)completed;
- (unsigned int)currentStep;
- (id)key;
- (void)setCompleted:(bool)arg1;
- (void)setCurrentStep:(unsigned int)arg1;
- (void)setKey:(id)arg1;
- (void)setSuggestedAutomationIdentifier:(id)arg1;
- (id)suggestedAutomationIdentifier;

@end
