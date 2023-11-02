
@interface MOVStreamFrameConverter : NSObject {
    MIOPixelBufferPool * _pool;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
    bool  _transferSessionUsageDisabled;
}

@property bool transferSessionUsageDisabled;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)convertPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithTargetWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 bytesPerRow:(unsigned long long)arg4;
- (id)initWithTargetWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 bytesPerRows:(id)arg4;
- (id)initWithTargetWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 extendedPixelsPerRow:(unsigned long long)arg4;
- (void)setTransferSessionUsageDisabled:(bool)arg1;
- (bool)transferSessionUsageDisabled;

@end
