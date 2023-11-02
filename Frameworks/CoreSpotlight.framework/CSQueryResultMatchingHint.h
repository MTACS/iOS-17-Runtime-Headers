
@interface CSQueryResultMatchingHint : NSObject {
    NSString * _attribute;
    NSArray * _tokens;
}

@property (readonly, copy) NSString *attribute;
@property (readonly, copy) NSArray *tokens;

+ (id)_snippetHintAttributeSet;
+ (id)randomTokensFromText:(id)arg1 maxTokens:(unsigned long long)arg2 maxTextLength:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)attribute;
- (id)description;
- (id)flattenedHints;
- (id)initWithAttribute:(id)arg1 tokens:(id)arg2;
- (id)initWithBackingHint:(id)arg1;
- (bool)isValidAttributeForSnippetHint:(id)arg1;
- (id)tokens;

@end
