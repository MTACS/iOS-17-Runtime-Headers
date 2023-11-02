
@interface MotionEncoderWrapper : NSObject {
    int  _attributeCount;
    struct vector<unsigned char, std::allocator<unsigned char>> { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
            char *__value_; 
        } __end_cap_; 
    }  _bitstream;
    int  _componentsPerAttribute;
    NSData * _encoderParamsData;
    int  _frameCount;
    int  _intraFramePeriod;
    unsigned char  _quantization;
    unsigned long long  encParametersLength;
    void * encoder;
    unsigned long long  estimatedEncodedFrameSizeInBytes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)encodeFrameInternal:(const int*)arg1 type:(unsigned long long*)arg2 encodeError:(unsigned long long*)arg3;
- (id)getEncoderParams;
- (id)initWithAttributeCount:(unsigned int)arg1 componentCount:(unsigned int)arg2 quantization:(unsigned int)arg3;

@end
