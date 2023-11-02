
@interface TXRParserKTX : NSObject <TXRParser> {
    unsigned int  _bytesOfKeyValueData;
    TXRDeferredTextureInfo * _deferredTextureInfo;
    NSDictionary * _internalSizedFormatLookup;
    bool  _isCompressed;
    NSObject<OS_dispatch_queue> * _parserQueue;
    bool  _shouldFlipVertically;
    TXRTextureInfo * _textureInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TXRTextureInfo *textureInfo;

+ (bool)exportTexture:(id)arg1 url:(id)arg2 error:(id*)arg3;
+ (bool)handlesData:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)determineFormatFromType:(unsigned int)arg1 format:(unsigned int)arg2 internalFormat:(unsigned int)arg3 baseInternalFormat:(unsigned int)arg4;
- (bool)parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (void)parseImageData:(id)arg1 WithOptions:(id)arg2 bufferAllocator:(id)arg3;
- (id)parsedImageAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;
- (id)textureInfo;

@end