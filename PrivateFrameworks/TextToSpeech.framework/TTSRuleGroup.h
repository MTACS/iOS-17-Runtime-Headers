
@interface TTSRuleGroup : NSObject {
    unsigned long long  _endIndex;
    NSString * _key;
    unsigned long long  _startIndex;
}

@property (nonatomic) unsigned long long endIndex;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) unsigned long long startIndex;

- (void).cxx_destruct;
- (unsigned long long)endIndex;
- (id)key;
- (void)setEndIndex:(unsigned long long)arg1;
- (void)setKey:(id)arg1;
- (void)setStartIndex:(unsigned long long)arg1;
- (unsigned long long)startIndex;

@end
