
@interface SiriSharedUICompactServerUtteranceLabel : SiriSharedUIContentLabel {
    SAUIAssistantUtteranceView * _assistantUtteranceView;
}

@property (nonatomic, retain) SAUIAssistantUtteranceView *assistantUtteranceView;

- (void).cxx_destruct;
- (id)assistantUtteranceView;
- (void)setAssistantUtteranceView:(id)arg1;

@end
