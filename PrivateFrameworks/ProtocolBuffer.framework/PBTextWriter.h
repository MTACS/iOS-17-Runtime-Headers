
@interface PBTextWriter : NSObject {
    NSMutableDictionary * _cachedObjectTypes;
    NSMutableString * _dest;
    long long  _indent;
    bool  _newlinesPrinted;
}

- (void)dealloc;
- (id)init;
- (void)reset;
- (id)string;
- (bool)write:(id)arg1;

@end
