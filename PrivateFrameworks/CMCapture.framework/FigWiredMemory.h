
@interface FigWiredMemory : NSObject {
    void * _bytes;
    bool  _isWired;
    unsigned long long  _length;
    unsigned long long  _roundedLength;
}

@property (nonatomic, readonly) void*bytes;
@property (nonatomic, readonly) unsigned long long length;

+ (void)initialize;

- (void*)bytes;
- (void)dealloc;
- (id)initWithLength:(unsigned long long)arg1;
- (unsigned long long)length;

@end
