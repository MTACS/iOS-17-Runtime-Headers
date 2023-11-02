
@interface JFXDepthDecompressor : NSObject {
    int  _depthCodecType;
    struct opaqueCMFormatDescription { } * _previousFormatDescription;
    JFXVideoDecoderInterface * _videoDecoderInterface;
}

@property (nonatomic, readonly) int depthCodecType;

+ (id)NSDataWithCMBlockBuffer:(struct OpaqueCMBlockBuffer { }*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (int)bitDepthOf:(struct opaqueCMFormatDescription { }*)arg1;
+ (id)dataWithCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
+ (id)trackOptionsForDepthCodecType:(int)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)decompressAVDepthData:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (id)decompressAVDepthData_BGRA:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (id)decompressAVDepthData_HEVC10:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (id)decompressAVDepthData_LZ:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (id)decompressAVDepthData_Photo:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (int)depthCodecType;
- (id)incompleteImageSourceAuxDataInfoDict:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (id)init;

@end
