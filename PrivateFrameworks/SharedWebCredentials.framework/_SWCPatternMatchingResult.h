
@interface _SWCPatternMatchingResult : NSObject {
    bool  _excluded;
    unsigned long long  _index;
}

@property (getter=isExcluded, nonatomic, readonly) bool excluded;
@property (nonatomic, readonly) unsigned long long index;

+ (id)new;

- (id)_initWithIndex:(unsigned long long)arg1 excluded:(bool)arg2;
- (unsigned long long)index;
- (id)init;
- (bool)isExcluded;

@end
