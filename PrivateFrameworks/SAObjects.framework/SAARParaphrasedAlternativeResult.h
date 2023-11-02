
@interface SAARParaphrasedAlternativeResult : SAAceView

@property (nonatomic, retain) <SAClientBoundCommand> *command;
@property (nonatomic, copy) NSString *displayText;
@property (nonatomic, copy) NSString *paraphrasedIntent;

+ (id)paraphrasedAlternativeResult;
+ (id)paraphrasedAlternativeResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)command;
- (id)displayText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)paraphrasedIntent;
- (void)setCommand:(id)arg1;
- (void)setDisplayText:(id)arg1;
- (void)setParaphrasedIntent:(id)arg1;

@end
