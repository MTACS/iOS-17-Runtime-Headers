
@protocol TXRParser <NSObject>

@required

+ (bool)handlesData:(NSData *)arg1;

- (bool)parseData:(NSData *)arg1 bufferAllocator:(id <TXRBufferAllocator>)arg2 options:(TXROptions *)arg3 error:(id*)arg4;
- (TXRImageInfo *)parsedImageAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;
- (TXRTextureInfo *)textureInfo;

@end
