
@interface NURenderer : NSObject <NURenderer> {
    CIContext * _context;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) CIContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;

+ (id)_renderContextOptionsWithOptions:(id)arg1 nameSuffix:(id)arg2;
+ (bool)allowClampToAlpha;
+ (id)defaultRenderContextOptions;
+ (bool)defaultUseHalfFloat;
+ (id)rendererWithMetalDevice:(id)arg1 options:(id)arg2;
+ (struct CGColorSpace { }*)workingColorSpace;
+ (int)workingFormat;

- (void).cxx_destruct;
- (id)context;
- (id)description;
- (id)imageForSurface:(id)arg1 options:(id)arg2;
- (id)init;
- (id)initWithCIContext:(id)arg1 priority:(long long)arg2;
- (id)name;
- (id)renderDestinationForSurface:(id)arg1;
- (id)renderImage:(id)arg1 rect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 toDestination:(id)arg3 atPoint:(struct { long long x1; long long x2; })arg4 error:(out id*)arg5;

@end
