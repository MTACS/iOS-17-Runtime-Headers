
@interface SAARParaphrasedSuggestedResult : SAAceView

@property (nonatomic, retain) <SAClientBoundCommand> *command;
@property (nonatomic, copy) NSString *displayText;
@property (nonatomic) long long rank;

+ (id)paraphrasedSuggestedResult;
+ (id)paraphrasedSuggestedResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)command;
- (id)displayText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)rank;
- (void)setCommand:(id)arg1;
- (void)setDisplayText:(id)arg1;
- (void)setRank:(long long)arg1;

@end
