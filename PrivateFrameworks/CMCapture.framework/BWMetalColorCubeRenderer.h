
@interface BWMetalColorCubeRenderer : NSObject <BWFilterRenderer> {
    NSBundle * _bundle;
    BWColorLookupCache * _colorLookupCache;
    NSData * _currentBackgroundColorLookupTables;
    NSData * _currentForegroundColorLookupTables;
    FigColorCubeMetalFilter * _filters;
    struct BWInterpolatedColorLookupTableEntry { 
        NSData *lookupTable; 
        float strength; 
        NSData *interpolatedTable; 
    }  _interpolatedBackgroundColorLookupTables;
    struct BWInterpolatedColorLookupTableEntry { 
        NSData *lookupTable; 
        float strength; 
        NSData *interpolatedTable; 
    }  _interpolatedForegroundColorLookupTables;
    bool  _mixingColorCubesInGammaDomain;
    <MTLCommandQueue> * _mtlCommandQueue;
}

@property (nonatomic, readonly) bool adjustsMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool mixingColorCubesInGammaDomain;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAnimation;
@property (nonatomic, readonly) short type;

+ (id)bundle;
+ (void)initialize;

- (void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)adjustsMetadata;
- (void)dealloc;
- (id)displayName;
- (id)initWithMetalCommandQueue:(id)arg1 mixInGammaDomain:(bool)arg2;
- (bool)mixingColorCubesInGammaDomain;
- (int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3;
- (void)renderUsingParameters:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 inputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 originalPixelBuffer:(struct __CVBuffer { }*)arg4 processedPixelBuffer:(struct __CVBuffer { }*)arg5 completionHandler:(id /* block */)arg6;
- (bool)supportsAnimation;
- (short)type;

@end
