
@interface _LSDBEnumerator : LSEnumerator <NSCopying> {
    struct Context { 
        struct LSContext {} *_contextPointer; 
        struct LSContext { 
            _LSDatabase *db; 
        } _contextStorage; 
        bool _created; 
        NSError *_error; 
    }  _context;
    unsigned int  _hasPrepared;
    unsigned int  _hasReachedEnd;
    unsigned int  _hasTriedToPrepare;
    unsigned long long  _index;
    id  _lastFastObject;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_getObject:(id*)arg1 atIndex:(unsigned long long)arg2 context:(struct LSContext { id x1; }*)arg3;
- (id)_initWithContext:(struct LSContext { id x1; }*)arg1;
- (bool)_prepareWithContext:(struct LSContext { id x1; }*)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)nextObject;
- (id)swift_firstWhere:(id /* block */)arg1;
- (void)swift_forEach:(id /* block */)arg1;

@end
