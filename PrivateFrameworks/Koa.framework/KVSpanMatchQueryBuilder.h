
@interface KVSpanMatchQueryBuilder : NSObject {
    NSString * _cleanText;
    NSMutableString * _cleanTextMutable;
    NSLocale * _locale;
    struct TokenStream { 
        struct Token {} *__begin_; 
        struct Token {} *__end_; 
        struct __compressed_pair<skit::Token *, std::allocator<skit::Token>> { 
            struct Token {} *__value_; 
        } __end_cap_; 
    }  _normalized_tokens;
    struct TokenStream { 
        struct Token {} *__begin_; 
        struct Token {} *__end_; 
        struct __compressed_pair<skit::Token *, std::allocator<skit::Token>> { 
            struct Token {} *__value_; 
        } __end_cap_; 
    }  _tokens;
}

+ (id)queryFromTokenChain:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addTokenWithValue:(id)arg1 cleanValue:(id)arg2 normalizedValues:(id)arg3 beginIndex:(unsigned int)arg4 endIndex:(unsigned int)arg5 isSignificant:(bool)arg6 isWitespace:(bool)arg7;
- (id)build;
- (id)init;
- (id)initWithLocale:(id)arg1;
- (id)initWithLocale:(id)arg1 cleanText:(id)arg2;

@end
