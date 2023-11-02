
@interface AFPhonemeMapper : NSObject {
    NSString * _languageCode;
    NSDictionary * _phonemeMap;
    NSRegularExpression * _regex;
}

+ (id)_buildRegexMatchingSubstrings:(id)arg1;
+ (id)_mapForLanguageCode:(id)arg1;

- (void).cxx_destruct;
- (id)initWithLanguageCode:(id)arg1;
- (id)stringByReplacingPhonemesInString:(id)arg1;

@end
