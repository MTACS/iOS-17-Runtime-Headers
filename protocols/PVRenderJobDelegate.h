
@protocol PVRenderJobDelegate <NSObject>

@required

+ (unsigned int)jobTypeTag;

- (void)buildGraph:(void*)arg1 renderContext:(const void*)arg2 frameStats:(void*)arg3;
- (void)finishCancelledJob;
- (void)finishCompletedJob;
- (unsigned int)jobTypeTag;
- (void)renderJobFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (void)setupDestinationBuffers:(void*)arg1 renderContext:(const void*)arg2 frameStats:(void*)arg3;
- (PVVideoCompositingContext *)videoCompositingContext;

@optional

- (int)graphBuildThreadPriority;
- (int)jobPriority;
- (unsigned long long)packedFamilyCode;
- (int)renderContextPriority;
- (int)renderThreadPriority;

@end
