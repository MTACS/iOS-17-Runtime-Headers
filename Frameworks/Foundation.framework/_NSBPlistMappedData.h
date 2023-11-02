
@interface _NSBPlistMappedData : NSData {
    unsigned char  bplistMarker;
    unsigned long long  bplistOffset;
    struct { 
        unsigned char _unused[5]; 
        unsigned char _sortVersion; 
        unsigned char _offsetIntSize; 
        unsigned char _objectRefSize; 
        unsigned long long _numObjects; 
        unsigned long long _topObject; 
        unsigned long long _offsetTableOffset; 
    }  bplistTrailer;
    unsigned long long  mappingIndex;
    void * ptr;
    unsigned long long  size;
}

- (unsigned long long)_bplistObjectsRangeEnd;
- (bool)_getBPlistMarker:(char *)arg1 offset:(unsigned long long*)arg2 trailer:(struct { unsigned char x1[5]; unsigned char x2; unsigned char x3; unsigned char x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; }*)arg3;
- (const void*)bytes;
- (void)dealloc;
- (id)initWithBinaryPlistData:(void*)arg1 size:(unsigned long long)arg2 trailer:(struct { unsigned char x1[5]; unsigned char x2; unsigned char x3; unsigned char x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })arg3 offset:(unsigned long long)arg4 marker:(unsigned char)arg5;
- (id)initWithFileURL:(id)arg1 error:(id*)arg2;
- (unsigned long long)length;
- (long long)mappingIndex;
- (void)setMappingIndex:(long long)arg1;

@end
