
@interface VCPSceneprintDescriptor : NSObject <VCPDistanceDescriptorProtocol> {
    VNSceneprint * _sceneprint;
}

+ (id)descriptorWithData:(id)arg1;
+ (id)descriptorWithImage:(struct __CVBuffer { }*)arg1;
+ (int)preferredPixelFormat;
+ (bool)usePHAssetData;

- (void).cxx_destruct;
- (int)computeDistance:(float*)arg1 toDescriptor:(id)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithImage:(struct __CVBuffer { }*)arg1;
- (id)serialize;

@end
