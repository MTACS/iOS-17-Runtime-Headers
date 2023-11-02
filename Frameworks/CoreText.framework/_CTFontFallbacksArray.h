
@interface _CTFontFallbacksArray : NSArray {
    const void * _baseFont;
    NSMutableArray * _cascade;
    unsigned long long  _count;
    NSMutableArray * _fallbacks;
    unsigned long long  _hash;
    struct TUnfairLock { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } fLock; 
    }  _lock;
    const struct TTraitsValues { unsigned int x1; double x2; double x3; double x4; } * _refTraits;
    int  _uiUse;
}

- (id).cxx_construct;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)objectAtIndex:(unsigned long long)arg1;

@end
