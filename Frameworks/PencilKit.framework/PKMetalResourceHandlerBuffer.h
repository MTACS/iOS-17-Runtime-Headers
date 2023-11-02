
@interface PKMetalResourceHandlerBuffer : NSObject {
    PKMetalBuffer * _buffer;
    unsigned long long  _bufferSize;
    unsigned long long  _currentOffset;
    <MTLDevice> * _device;
    unsigned long long  _options;
    bool  _purgeable;
    NSMutableArray * _reusableBuffers;
}

- (void).cxx_destruct;

@end
