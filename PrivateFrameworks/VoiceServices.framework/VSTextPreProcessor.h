
@interface VSTextPreProcessor : NSObject {
    NSString * _languageID;
    NSArray * _rules;
    struct __CFStringTokenizer { } * _tokenizer;
}

- (void)dealloc;
- (id)initWithContentsOfPath:(id)arg1 languageIdentifier:(id)arg2;
- (id)processedTextFromString:(id)arg1;

@end
