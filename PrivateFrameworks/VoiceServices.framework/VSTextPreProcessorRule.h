
@interface VSTextPreProcessorRule : NSObject {
    bool  _caseSensitive;
    bool  _eatPunctuation;
    NSString * _matchPattern;
    NSString * _replacement;
}

- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)matchedString:(id)arg1 forTokenInRange:(struct { long long x1; long long x2; }*)arg2;

@end
