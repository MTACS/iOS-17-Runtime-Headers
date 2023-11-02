
@interface CUKeyValueStoreReader : NSObject {
    struct cdb { 
        char *map; 
        int fd; 
        unsigned int size; 
        unsigned int loop; 
        unsigned int khash; 
        unsigned int kpos; 
        unsigned int hpos; 
        unsigned int hslots; 
        unsigned int dpos; 
        unsigned int dlen; 
    }  _cdb;
    int  _fd;
    Class  _keyType;
    Class  _valueType;
}

- (id)_readObjectAtOffset:(unsigned int)arg1 length:(unsigned int)arg2 type:(Class)arg3 error:(id*)arg4;
- (void)close;
- (void)dealloc;
- (bool)enumerateKeyType:(Class)arg1 valueType:(Class)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (bool)enumerateKeysAndValuesAndReturnError:(id*)arg1 handler:(id /* block */)arg2;
- (bool)enumerateValuesForKey:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (bool)enumerateValuesForKey:(id)arg1 valueType:(Class)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (id)init;
- (id)initWithKeyType:(Class)arg1 valueType:(Class)arg2;
- (bool)openAtPath:(id)arg1 error:(id*)arg2;
- (bool)valueExistsForKey:(id)arg1;
- (id)valueForKey:(id)arg1 error:(id*)arg2;
- (id)valueForKey:(id)arg1 valueType:(Class)arg2 error:(id*)arg3;

@end
