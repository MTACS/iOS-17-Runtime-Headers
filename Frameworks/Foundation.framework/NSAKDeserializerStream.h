
@interface NSAKDeserializerStream : NSObject <NSDeserializerStream> {
    const char * current;
    bool  freeWhenDone;
    unsigned long long  left;
    unsigned long long  max;
    const void * memory;
}

- (void)dealloc;
- (id)initFromMemoryNoCopy:(const void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (id)initFromPath:(id)arg1;
- (unsigned long long)readAlignedDataSize;
- (void)readData:(void*)arg1 length:(unsigned long long)arg2;
- (int)readInt;

@end