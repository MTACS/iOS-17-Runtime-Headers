
@interface SAUIAssistantTipView : SAUIAssistantUtteranceView

@property (nonatomic, copy) NSString *flowIdentifier;
@property (nonatomic, copy) NSString *tipPrefix;

+ (id)assistantTipView;
+ (id)assistantTipViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)flowIdentifier;
- (id)groupIdentifier;
- (void)setFlowIdentifier:(id)arg1;
- (void)setTipPrefix:(id)arg1;
- (id)tipPrefix;

@end
