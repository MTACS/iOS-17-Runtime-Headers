
@interface VMUSimpleDeserializer : VMUAbstractSerializer {
    void * _cache;
    NSData * _data;
}

- (void).cxx_destruct;
- (unsigned int*)_deserializeValues:(unsigned int)arg1 error:(id*)arg2;
- (const char *)copyDeserializedNullTerminatedBytesWithError:(id*)arg1;
- (id)copyDeserializedStringWithError:(id*)arg1;
- (id)copyDeserializedStringWithID:(unsigned int)arg1 error:(id*)arg2;
- (void)dealloc;
- (unsigned int)deserialize32WithError:(id*)arg1;
- (unsigned long long)deserialize64WithError:(id*)arg1;
- (id)initWithData:(id)arg1;
- (void)skipFields:(unsigned int)arg1;

@end
