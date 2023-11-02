
@interface WFSuggestAutomationEvent : WFEvent {
    bool  _completed;
    bool  _interacted;
    NSString * _key;
    NSString * _source;
    NSString * _suggestedAutomationIdentifier;
}

@property (nonatomic) bool completed;
@property (nonatomic) bool interacted;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSString *suggestedAutomationIdentifier;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (bool)completed;
- (bool)interacted;
- (id)key;
- (void)setCompleted:(bool)arg1;
- (void)setInteracted:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setSuggestedAutomationIdentifier:(id)arg1;
- (id)source;
- (id)suggestedAutomationIdentifier;

@end
