
@interface VMUSimpleSerializer : VMUAbstractSerializer {
    unsigned int  _internCursor;
    void * _map;
}

- (void)_serializeValues:(unsigned int*)arg1 count:(unsigned int)arg2;
- (id)copyContiguousData;
- (void)dealloc;
- (id)init;
- (void)serialize32:(unsigned int)arg1;
- (void)serialize64:(unsigned long long)arg1;
- (unsigned int)serializeNullTerminatedBytes:(const char *)arg1;
- (unsigned int)serializeString:(id)arg1;

@end
