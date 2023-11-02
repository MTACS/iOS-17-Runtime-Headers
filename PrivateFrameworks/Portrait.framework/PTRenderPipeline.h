
@interface PTRenderPipeline : NSObject {
    unsigned long long  _activeVersion;
    NSString * _description;
    PTRenderPipelineDescriptor * _descriptor;
    PTMetalContext * _metalContext;
}

@property (readonly) unsigned long long activeVersion;

+ (id)debugRenderOptions;
+ (bool)isMetalDeviceSupported:(id)arg1;
+ (bool)isRenderVersionSupported:(unsigned long long)arg1;
+ (unsigned long long)latestVersion;
+ (int)prewarmForMediaserverd;
+ (int)prewarmWithDescriptor:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)activeVersion;
- (id)createRenderStateWithQuality:(int)arg1;
- (id)description;
- (int)encodeRenderTo:(id)arg1 withRenderRequest:(id)arg2;
- (id)initWithDescriptor:(id)arg1;
- (unsigned long long)minimumResourceHeapSize;
- (void)prewarm;
- (void)setActiveVersion:(unsigned long long)arg1;
- (void)setResourceHeap:(id)arg1;

@end
