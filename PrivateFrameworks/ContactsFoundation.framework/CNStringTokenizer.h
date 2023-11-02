
@interface CNStringTokenizer : NSObject {
    CNUnfairLock * _lock;
    struct __CFStringTokenizer { } * _tokenizer;
}

@property (nonatomic, readonly) CNUnfairLock *lock;
@property (nonatomic, readonly) struct __CFStringTokenizer { }*tokenizer;

+ (id)adjustRanges:(id)arg1 toIncludeNonBreakingCharactersInString:(id)arg2;
+ (bool)isCharacterNonBreaking:(unsigned short)arg1;
+ (id)tokenizeString:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithLocale:(id)arg1;
- (id)lock;
- (id)rangesOfWordTokensInString:(id)arg1;
- (id)rangesOfWordUnitTokensInString:(id)arg1;
- (id)tokenizeString:(id)arg1;
- (struct __CFStringTokenizer { }*)tokenizer;

@end
