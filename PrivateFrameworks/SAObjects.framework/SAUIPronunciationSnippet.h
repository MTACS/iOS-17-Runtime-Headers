
@interface SAUIPronunciationSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *cancelCommands;
@property (nonatomic, copy) NSString *interactionId;
@property (nonatomic, copy) NSString *orthography;
@property (nonatomic, copy) NSArray *pronunciations;
@property (nonatomic, copy) NSArray *selectNoneCommands;
@property (nonatomic, copy) NSString *selectNoneText;

+ (id)pronunciationSnippet;
+ (id)pronunciationSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)cancelCommands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)interactionId;
- (id)orthography;
- (id)pronunciations;
- (id)selectNoneCommands;
- (id)selectNoneText;
- (void)setCancelCommands:(id)arg1;
- (void)setInteractionId:(id)arg1;
- (void)setOrthography:(id)arg1;
- (void)setPronunciations:(id)arg1;
- (void)setSelectNoneCommands:(id)arg1;
- (void)setSelectNoneText:(id)arg1;

@end
