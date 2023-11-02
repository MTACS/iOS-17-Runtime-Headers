
@interface VCPVideoSyncFrameDecoder : NSObject {
    struct CF<OpaqueVTDecompressionSession *> { 
        struct OpaqueVTDecompressionSession {} *value_; 
    }  _decompressionSession;
    bool  _requiresRotation;
    struct Rotator { struct __CVPixelBufferPool {} *x1; int x2; int x3; int x4; struct OpaqueVTPixelRotationSession {} *x5; } * _rotator;
}

+ (bool)isSyncFrameForCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
+ (bool)readBigEndianInt:(int*)arg1 fromBlockBuffer:(struct OpaqueCMBlockBuffer { }*)arg2 forNumBytes:(int)arg3 atOffset:(unsigned long long)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (bool)decodeCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 toCMSampleBuffer:(struct opaqueCMSampleBuffer {}**)arg2 error:(id*)arg3;
- (id)initWithDecoderSettings:(id)arg1 formatDescription:(struct opaqueCMFormatDescription { }*)arg2 rotationAngle:(int)arg3;

@end
