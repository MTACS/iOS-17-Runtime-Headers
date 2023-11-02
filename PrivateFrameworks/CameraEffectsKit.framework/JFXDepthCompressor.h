
@interface JFXDepthCompressor : NSObject {
    int  _depthCodecType;
    struct opaqueCMFormatDescription { } * _previousFormatDescription;
    JFXVideoEncoderInterface * _videoEncoderInterface;
}

@property (nonatomic, readonly) int depthCodecType;

+ (id)NSDataFromDepthMapInsideAVDepthData:(id)arg1;
+ (id)NSDataFromFloatDepth32:(struct __CVBuffer { }*)arg1;
+ (id)decapsulatePayload:(id)arg1;
+ (id)encapsulatePayload:(id)arg1;
+ (id)fakeAuxDepthInfoDictionaryForCVPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (id)fakeXMPDataIfNotFound;

- (void).cxx_destruct;
- (id)compressAVDepthData:(id)arg1 timingInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })arg2 error:(id*)arg3;
- (id)compressAVDepthData_BGRA:(id)arg1 timingInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })arg2 error:(id*)arg3;
- (id)compressAVDepthData_HEVC10:(id)arg1 timingInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })arg2 error:(id*)arg3;
- (id)compressAVDepthData_LZ:(id)arg1 timingInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })arg2 error:(id*)arg3;
- (id)compressAVDepthData_Photo:(id)arg1 timingInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })arg2 error:(id*)arg3;
- (id)compressDepthMapCVPixelBuffer:(struct __CVBuffer { }*)arg1 timingInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })arg2 error:(id*)arg3;
- (struct __CVBuffer { }*)copyDepthBufferAsBGRA:(struct __CVBuffer { }*)arg1;
- (void)dealloc;
- (int)depthCodecType;
- (struct opaqueCMFormatDescription { }*)depthFormatDescriptionForDepthDimensions:(struct { int x1; int x2; })arg1;
- (id)depthOutputSettingsForDepthDimensions:(struct { int x1; int x2; })arg1;
- (id)depthSampleBufferAppendingDepthMetadata:(id)arg1 depthSampleBufferFromCodec:(struct opaqueCMSampleBuffer { }*)arg2;
- (id)depthSampleBufferWithNewHVCCWithDepthMetadata:(id)arg1 depthSampleBufferFromCodec:(struct opaqueCMSampleBuffer { }*)arg2;
- (unsigned int)getPayloadTypeOrSize:(id)arg1 offsetPointer:(unsigned long long*)arg2;
- (id)hevcSEIMessageDataWithDepthXMPMetadata:(id)arg1 isPrefixSEI:(bool)arg2 nuh_layer_id:(int)arg3 nuh_temporal_id_plus1:(int)arg4;
- (id)hevcSEIPayload:(id)arg1;
- (id)hevcSEIPayloadHeaderForPayloadType:(int)arg1 payloadSize:(unsigned long long)arg2;
- (id)initWithDepthCodecType:(int)arg1;
- (id)mutableCopyExtensionsDictionaryCopyFromAVDepthData:(id)arg1;

@end
