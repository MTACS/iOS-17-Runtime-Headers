
@interface MTLGPUDebugTexture : MTLToolsTexture <MTLGPUDebugResource> {
    unsigned long long  _identifier;
}

@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long allocationID;
@property (nonatomic, retain) <MTLTextureSPI> *baseObject;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (nonatomic, readonly) unsigned long long gpuAddress;
@property (nonatomic, readonly) unsigned long long gpuIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) <MTLHeap> *heap;
@property (readonly) unsigned long long heapOffset;
@property (copy) NSString *label;
@property (nonatomic, readonly) unsigned long long length;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long resourceOptions;
@property int responsibleProcess;
@property (readonly) unsigned long long storageMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long underlyingGPUAddress;
@property (readonly) unsigned long long unfilteredResourceOptions;

- (id)baseObject;
- (unsigned long long)gpuIdentifier;
- (unsigned long long)handleForOffset:(unsigned long long)arg1;
- (id)initWithTexture:(id)arg1 heap:(id)arg2 device:(id)arg3;
- (id)initWithTextureView:(id)arg1 parentBuffer:(id)arg2 heap:(id)arg3 device:(id)arg4;
- (id)initWithTextureView:(id)arg1 parentTexture:(id)arg2 heap:(id)arg3 device:(id)arg4;
- (unsigned long long)length;
- (id)newCompressedTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 level:(unsigned long long)arg3 slice:(unsigned long long)arg4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 resourceIndex:(unsigned long long)arg5;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 swizzle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })arg5;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 swizzle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })arg5 resourceIndex:(unsigned long long)arg6;
- (unsigned long long)underlyingGPUAddress;
- (void)useWithComputeEncoder:(id)arg1 usage:(unsigned long long)arg2;
- (void)useWithRenderEncoder:(id)arg1 usage:(unsigned long long)arg2 stages:(struct optional<unsigned long> { union { BOOL x_1_1_1; unsigned long long x_1_1_2; } x1; bool x2; })arg3;

@end
