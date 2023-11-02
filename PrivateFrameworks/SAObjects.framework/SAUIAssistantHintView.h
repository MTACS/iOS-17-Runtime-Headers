
@interface SAUIAssistantHintView : SAUIAssistantUtteranceView

@property (nonatomic, copy) NSArray *commands;
@property (nonatomic, copy) NSArray *regions;

+ (id)assistantHintView;
+ (id)assistantHintViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)regions;
- (void)setCommands:(id)arg1;
- (void)setRegions:(id)arg1;

@end
