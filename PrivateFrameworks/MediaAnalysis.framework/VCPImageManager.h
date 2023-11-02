
@interface VCPImageManager : NSObject {
    struct CMPhotoDecompressionSession { } * _decodeSession;
    struct CMPhotoCompressionSession { } * _encodeSession;
    NSObject<OS_dispatch_queue> * _transcodeQueue;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
}

+ (bool)_exportReencodedJPEG;
+ (bool)allowFastPathDecodeWithUniformType:(id)arg1 pixelWidth:(unsigned long long)arg2 andPixelHeight:(unsigned long long)arg3;
+ (bool)canDecodeAcceleratedUniformTypeIdentifier:(id)arg1;
+ (bool)loggingEnabled;
+ (id)sharedImageManager;

- (void).cxx_destruct;
- (int)acceleratedDecodeImageData:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(struct __CVBuffer {}**)arg4 orientation:(unsigned int*)arg5 flushCache:(bool)arg6;
- (int)compressCVPixelBuffer:(struct __CVBuffer { }*)arg1 toJPEGData:(id*)arg2 targetBitStreamLength:(unsigned long long)arg3 padding:(bool)arg4;
- (int)convertPixelBuffer:(struct __CVBuffer {}**)arg1 toPixelFormat:(int)arg2 flushCache:(bool)arg3;
- (int)createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(struct __CVBuffer {}**)arg4;
- (id)dataForResource:(id)arg1;
- (void)dealloc;
- (int)decodeImageSource:(struct CGImageSource { }*)arg1 withUniformTypeIdentifier:(id)arg2 pixelFormat:(int)arg3 maxDimension:(unsigned long long)arg4 orientation:(unsigned int*)arg5 pixelBuffer:(struct __CVBuffer {}**)arg6;
- (int)drawImage:(struct CGImage { }*)arg1 pixelFormat:(int)arg2 withOrientation:(unsigned int)arg3 maxDimension:(unsigned long long)arg4 pixelBuffer:(struct __CVBuffer {}**)arg5;
- (void)flushCache;
- (struct __CVBuffer { }*)imageForResource:(id)arg1 pixelFormat:(int)arg2;
- (struct __CVBuffer { }*)imageForResource:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3;
- (struct __CVBuffer { }*)imageForResource:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 orientation:(unsigned int*)arg4;
- (id)init;
- (struct __CVBuffer { }*)pixelBufferWithFormat:(int)arg1 andMaxDimension:(unsigned long long)arg2 fromData:(id)arg3 withUniformTypeIdentifier:(id)arg4 flushCache:(bool)arg5 orientation:(unsigned int*)arg6;
- (struct __CVBuffer { }*)pixelBufferWithFormat:(int)arg1 andMaxDimension:(unsigned long long)arg2 fromImageURL:(id)arg3;
- (struct __CVBuffer { }*)pixelBufferWithFormat:(int)arg1 andMaxDimension:(unsigned long long)arg2 fromImageURL:(id)arg3 flushCache:(bool)arg4 orientation:(unsigned int*)arg5;
- (struct __CVBuffer { }*)pixelBufferWithFormat:(int)arg1 andMaxDimension:(unsigned long long)arg2 fromImageURL:(id)arg3 orientation:(unsigned int*)arg4;
- (struct __CVBuffer { }*)pixelBufferWithFormat:(int)arg1 fromImageURL:(id)arg2 flushCache:(bool)arg3;
- (struct __CVBuffer { }*)pixelBufferWithFormat:(int)arg1 fromImageURL:(id)arg2 flushCache:(bool)arg3 orientation:(unsigned int*)arg4;

@end
