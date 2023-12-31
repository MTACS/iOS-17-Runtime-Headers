
@interface WMListLevelTextToken : NSObject {
    CMNumberFormatter * _formatter;
    int  _level;
    NSString * _string;
}

@property (readonly) int level;
@property (readonly) NSString *string;

+ (id)tokenWithString:(id)arg1 level:(int)arg2 formatter:(id)arg3;

- (void).cxx_destruct;
- (id)initWithString:(id)arg1 level:(int)arg2 formatter:(id)arg3;
- (int)level;
- (id)string;
- (id)stringForIndex:(unsigned long long)arg1;

@end
