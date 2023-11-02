
@interface HMDExtendedTypeReader : HMDTokenBasedStructuredReader {
    struct _HMDStructuredDataToken { 
        long long type; 
        id value; 
    }  _buffer;
    unsigned long long  _bufferCount;
    unsigned long long  _bufferHead;
    HMDStructuredReader * _reader;
}

- (void).cxx_destruct;
- (id)initWithReader:(id)arg1;
- (struct _HMDStructuredDataToken { long long x1; id x2; })nextTokenAfterToken:(const struct _HMDStructuredDataToken { long long x1; id x2; }*)arg1;

@end
