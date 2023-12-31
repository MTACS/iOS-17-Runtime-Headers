
@interface TIAutoshiftRegularExpressionLoader : NSObject {
    NSString * _nextSentencePrefixCharacters;
    NSRegularExpression * _regex;
    NSString * _sentenceDelimitingCharacters;
    NSString * _sentenceTrailingCharacters;
}

@property (nonatomic, readonly) NSString *nextSentencePrefixCharacters;
@property (nonatomic, retain) NSRegularExpression *regex;
@property (nonatomic, readonly) NSString *sentenceDelimitingCharacters;
@property (nonatomic, readonly) NSString *sentenceTrailingCharacters;

+ (id)loaderWithSentenceDelimiters:(id)arg1 trailingChars:(id)arg2 prefixChars:(id)arg3;

- (void).cxx_destruct;
- (id)initWithSentenceDelimiters:(id)arg1 trailingChars:(id)arg2 prefixChars:(id)arg3;
- (id)nextSentencePrefixCharacters;
- (id)regex;
- (id)sentenceDelimitingCharacters;
- (id)sentenceTrailingCharacters;
- (void)setRegex:(id)arg1;
- (void)startBackgroundLoad;

@end
