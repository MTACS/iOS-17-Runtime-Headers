
@interface FigRegWarpPPGPUShared : NSObject {
    FigRegWarpPPGPUShaders * _shaders;
}

+ (id)getSharedInstanceOrRelease:(bool)arg1;
+ (void)releaseSharedInstance;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)getShaders:(id)arg1;

@end
