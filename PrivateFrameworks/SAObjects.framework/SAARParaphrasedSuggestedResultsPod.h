
@interface SAARParaphrasedSuggestedResultsPod : SAAceView

@property (nonatomic, copy) NSArray *suggestedResults;
@property (nonatomic, copy) NSString *title;

+ (id)paraphrasedSuggestedResultsPod;
+ (id)paraphrasedSuggestedResultsPodWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setSuggestedResults:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)suggestedResults;
- (id)title;

@end
