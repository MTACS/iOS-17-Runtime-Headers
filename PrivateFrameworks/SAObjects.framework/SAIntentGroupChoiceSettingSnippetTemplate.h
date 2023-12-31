
@interface SAIntentGroupChoiceSettingSnippetTemplate : SAIntentGroupSettingSnippetTemplate

@property (nonatomic) bool selected;
@property (nonatomic, retain) <SAServerBoundCommand> *updateSlotCommand;

+ (id)choiceSettingSnippetTemplate;
+ (id)choiceSettingSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)selected;
- (void)setSelected:(bool)arg1;
- (void)setUpdateSlotCommand:(id)arg1;
- (id)updateSlotCommand;

@end
