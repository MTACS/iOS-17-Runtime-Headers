
@interface MotionDecoderWrapper : NSObject {
    unsigned long long  _attributeCount;
    unsigned long long  _componentsPerAttribute;
    void * decoder;
}

- (void)dealloc;
- (int)decodeFrameInternal:(id)arg1 decodedFrame:(int*)arg2 decodeError:(unsigned long long*)arg3;
- (int)getAttributeCount;
- (int)getComponentPerAttributeCount;
- (char *)getPointerToDataBuffer:(id)arg1;
- (id)initWithEncoderSeqParams:(id)arg1;

@end
