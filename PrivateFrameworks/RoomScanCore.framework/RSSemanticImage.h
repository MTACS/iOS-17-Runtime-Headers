
@interface RSSemanticImage : NSObject {
    union { 
        float *memoryBuffer; 
        struct __CVBuffer {} *pixelBuffer; 
    }  _backing;
    unsigned long long  _backingType;
    unsigned long long  _bytesPerRow;
    unsigned long long  _channel;
    unsigned int  _dataType;
    unsigned long long  _height;
    unsigned long long  _size;
    unsigned long long  _width;
}

- (void)dealloc;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
