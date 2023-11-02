
@interface FigFlatToNSDictionaryWrapper : NSDictionary {
    id /* block */  _deallocatorBlock;
    void * _dictionaryBacking;
    void * _exportedKeySpec;
    struct OpaqueFigFlatDictionary { } * _flatDictionary;
    int  _keySpace;
    struct OpaqueFigFlatDictionaryKeySpec { } * _keySpec;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lazyInitializationMutex;
}

- (unsigned long long)count;
- (void)dealloc;
- (id)initLazilyWithFlatDictionaryBacking:(void*)arg1 exportedKeySpec:(void*)arg2 deallocatorBlock:(id /* block */)arg3;
- (id)initWithFlatDictionary:(struct OpaqueFigFlatDictionary { }*)arg1 keySpec:(struct OpaqueFigFlatDictionaryKeySpec { }*)arg2;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;

@end
