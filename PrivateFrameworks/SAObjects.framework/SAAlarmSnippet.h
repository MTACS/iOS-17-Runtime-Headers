
@interface SAAlarmSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *alarms;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)alarms;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAlarms:(id)arg1;

@end
