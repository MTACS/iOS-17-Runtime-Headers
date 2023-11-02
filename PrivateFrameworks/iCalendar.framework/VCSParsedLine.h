
@interface VCSParsedLine : NSObject {
    NSMutableData * _content;
    NSString * _keyword;
    NSMutableDictionary * _params;
    long long  _tokenID;
    unsigned long long  _type;
    bool  _usePalmD4Hooks;
}

@property (nonatomic) long long tokenID;
@property (nonatomic) unsigned long long type;
@property (nonatomic) bool usePalmD4Hooks;

+ (const struct { long long x1; unsigned long long x2; unsigned long long x3; bool x4; id x5; }*)lookupProperty:(long long)arg1;
+ (long long)tokenizeKeyword:(const char *)arg1 withType:(unsigned long long*)arg2;
+ (long long)tokenizeNSStringKeyword:(id)arg1 withType:(unsigned long long*)arg2;

- (void).cxx_destruct;
- (id)content;
- (id)convertedContent;
- (id)description;
- (id)init;
- (id)keyword;
- (id)loadFromCString:(char *)arg1 withParseState:(id)arg2;
- (id)params;
- (void)reset;
- (void)setContentFromCString:(char *)arg1;
- (void)setKeywordFromCString:(char *)arg1;
- (void)setTokenID:(long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUsePalmD4Hooks:(bool)arg1;
- (long long)tokenID;
- (unsigned long long)type;
- (bool)usePalmD4Hooks;

@end
