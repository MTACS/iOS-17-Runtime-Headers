
@interface DTXBlockCompressorLibCompression : NSObject <DTXBlockCompressor> {
    _Atomic unsigned long long  _lz4ScratchBuffer;
    _Atomic unsigned long long  _lzfseScratchBuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)compressBuffer:(const char *)arg1 ofLength:(unsigned long long)arg2 toBuffer:(char *)arg3 ofLength:(unsigned long long)arg4 usingCompressionType:(int)arg5 withFinalCompressionType:(int*)arg6;
- (void)dealloc;
- (bool)uncompressBuffer:(const char *)arg1 ofLength:(unsigned long long)arg2 toBuffer:(char *)arg3 withKnownUncompressedLength:(unsigned long long)arg4 usingCompressionType:(int)arg5;

@end
