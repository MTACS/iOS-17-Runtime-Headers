
@interface SATimerSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *timers;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setTimers:(id)arg1;
- (id)timers;

@end
