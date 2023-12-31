
@interface MTLDebugTextureLayout : MTLToolsTextureLayout {
    MTLDebugDevice * _debugDevice;
    MTLTextureDescriptor * _descriptor;
}

@property (nonatomic, readonly) MTLDebugDevice *debugDevice;
@property (nonatomic, readonly, copy) MTLTextureDescriptor *descriptor;

- (void)dealloc;
- (id)debugDevice;
- (id)descriptor;
- (id)initWithBaseTextureLayout:(id)arg1 device:(id)arg2 descriptor:(id)arg3;

@end
