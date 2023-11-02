
@interface VisionCoreFrameworkManager : NSObject {
    VisionCoreObjectCache * _inferenceNetworkDescriptorsCache;
}

@property (readonly) VisionCoreObjectCache *inferenceNetworkDescriptorsCache;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)inferenceNetworkDescriptorsCache;

@end
