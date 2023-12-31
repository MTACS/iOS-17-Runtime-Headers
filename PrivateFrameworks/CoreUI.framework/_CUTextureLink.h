
@interface _CUTextureLink : NSObject <TXRDataSourceProvider> {
    <TXRBufferAllocator> * _bufferAllocator;
    CUINamedTexture * _namedTexture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)bufferAllocator;
- (void)dealloc;
- (id)namedTexture;
- (id)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;
- (id)provideTextureInfo;
- (void)setBufferAllocator:(id)arg1;
- (void)setNamedTexture:(id)arg1;

@end
