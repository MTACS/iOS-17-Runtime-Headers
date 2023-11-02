
@interface SRMemoryMapping : NSObject {
    int  _advice;
    void * _currentPosition;
    void * _mappedAddress;
    long long  _offset;
    unsigned long long  _pageAlignedSize;
    int  _protection;
    unsigned long long  _size;
    void * _start;
}

+ (void)initialize;

- (void)dealloc;

@end
