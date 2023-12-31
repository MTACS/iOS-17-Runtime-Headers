
@interface VCPContentAnalysis : NSObject {
    struct __CVBuffer { } * _argbPixelBuffer;
    struct OpaqueVTPixelTransferSession { } * _argbTransferSession;
    VCPCNNData * _input;
    VCPCNNModel * _model;
    unsigned long long  _previousContentType;
}

+ (id)contentAnalysis;

- (void).cxx_destruct;
- (int)blockContentDetection:(unsigned long long*)arg1;
- (void)copyBlock:(char *)arg1 withStride:(unsigned long long)arg2 toBlock:(float*)arg3;
- (void)dealloc;
- (int)detectPixelBuffer:(struct __CVBuffer { }*)arg1 contentType:(unsigned long long*)arg2;
- (id)init;

@end
