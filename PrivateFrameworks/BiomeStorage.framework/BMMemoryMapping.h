
@interface BMMemoryMapping : NSObject {
    int  _advice;
    _Atomic unsigned long long  _currentWriteOffset;
    void * _mappedAddress;
    long long  _offset;
    unsigned long long  _offsetSpace;
    unsigned long long  _pageAlignedSize;
    int  _protection;
    unsigned long long  _size;
    void * _start;
}

@property (readonly) unsigned long long currentWriteOffset;
@property (readonly) char *end;
@property (readonly) unsigned long long freeSpace;
@property (readonly) long long offset;
@property (readonly) unsigned long long size;
@property (readonly) void*start;
@property (readonly) unsigned long long used;
@property (getter=isWritable, readonly) bool writable;

+ (id)new;

- (unsigned char)atomicReadAtOffset:(unsigned long long)arg1 value:(union { unsigned long long x1; double x2; }*)arg2;
- (bool)atomicUpdateOffset:(unsigned long long)arg1 withValue:(union { unsigned long long x1; double x2; })arg2 shouldReplace:(id /* block */)arg3;
- (unsigned char)atomicWriteEightBytes:(unsigned long long)arg1 toOffset:(unsigned long long)arg2 expected:(unsigned long long*)arg3;
- (bool)canAtomicallyAccessOffset:(unsigned long long)arg1;
- (void*)currentPosition;
- (unsigned long long)currentWriteOffset;
- (id)dataAtOffset:(unsigned long long)arg1 withLength:(unsigned long long)arg2 makeCopy:(bool)arg3;
- (void)dealloc;
- (char *)end;
- (unsigned long long)freeSpace;
- (id)init;
- (id)initWithSize:(unsigned long long)arg1 protection:(int)arg2 advice:(int)arg3 offset:(long long)arg4;
- (bool)isValidReadFromOffset:(unsigned long long)arg1 withLength:(unsigned long long)arg2;
- (bool)isValidReadFromOffsetV2:(unsigned long long)arg1 withLength:(unsigned long long)arg2 currentFrameCount:(unsigned int)arg3;
- (bool)isWritable;
- (bool)mapWithFileHandle:(id)arg1 fileSize:(unsigned long long)arg2;
- (long long)offset;
- (unsigned long long)size;
- (void*)start;
- (void)sync;
- (void)unmap;
- (void)updateToMaxOfCurrentWriteOffsetAnd:(unsigned long long)arg1;
- (unsigned long long)used;
- (void)writeBytes:(const void*)arg1 toOffset:(unsigned long long)arg2 length:(unsigned long long)arg3;

@end
