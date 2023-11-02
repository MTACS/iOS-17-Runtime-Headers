
@interface TSUSparseArray : NSObject <NSCopying> {
    unsigned int  _depth;
    unsigned long long  _nonNilCount;
    struct tsuSaPage { int (**x1)(); } * _topPage;
}

@property (readonly) unsigned long long count;

+ (id)array;

- (void)clear;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)foreach:(id /* block */)arg1;
- (bool)hasObjectForKey:(unsigned long long)arg1;
- (void)increaseDepth;
- (unsigned long long)maxIndexForCurrentDepth;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKey:(unsigned long long)arg1;
- (void)removeObjectForKey:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forKey:(unsigned long long)arg2;

@end
