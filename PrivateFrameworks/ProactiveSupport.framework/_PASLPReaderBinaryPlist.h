
@interface _PASLPReaderBinaryPlist : NSObject <_PASLPReaderProtocol> {
    NSData * _backingData;
    struct { 
        void *mmapBase; 
        unsigned long long mmapSize; 
    }  _mappedRegion;
    unsigned char  _objectRefSize;
    const void * _offsets;
    unsigned long long  _offsetsCount;
    unsigned char  _offsetsSize;
    struct __CFAllocator { } * _releaseReaderDeallocator;
    unsigned long long  _topObjectRecord;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithData:(id)arg1 sourcedFromPath:(id)arg2 needsValidation:(bool)arg3 error:(id*)arg4;
- (id)keyAtIndex:(unsigned long long)arg1 usingDictionaryContext:(id)arg2;
- (id)objectAtIndex:(unsigned long long)arg1 usingArrayContext:(id)arg2;
- (id)objectAtIndex:(unsigned long long)arg1 usingDictionaryContext:(id)arg2;
- (id)objectForKey:(id)arg1 usingDictionaryContext:(id)arg2;
- (id)rootObjectWithErrMsg:(id*)arg1;

@end
