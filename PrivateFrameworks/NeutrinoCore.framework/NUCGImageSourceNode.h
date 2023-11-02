
@interface NUCGImageSourceNode : NUSourceNode {
    NSURL * _URL;
    NSString * _UTI;
    long long  _alphaInfo;
    NSDictionary * _auxiliaryImagesProperties;
    NSDictionary * _cgImageProperties;
    struct CGImageSource { } * _cgImageSource;
    NUColorSpace * _colorSpace;
    long long  _componentInfo;
    bool  _loaded;
    long long  _orientation;
    NSObject<OS_dispatch_queue> * _queue;
    struct { 
        long long width; 
        long long height; 
    }  _size;
}

@property (readonly) NSURL *URL;
@property (readonly) NSString *UTI;
@property long long alphaInfo;
@property (retain) NSDictionary *auxiliaryImagesProperties;
@property (nonatomic, retain) NSDictionary *cgImageProperties;
@property (nonatomic, retain) struct CGImageSource { }*cgImageSource;
@property (nonatomic, retain) NUColorSpace *colorSpace;
@property long long componentInfo;
@property bool loaded;
@property long long orientation;
@property struct { long long x1; long long x2; } size;

- (void).cxx_destruct;
- (id)URL;
- (id)UTI;
- (void)_addDefaultFinalizedSourceOptions:(id)arg1;
- (id)_evaluateAuxiliaryImageForType:(long long)arg1 error:(out id*)arg2;
- (id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3;
- (id)_evaluateRawImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_finalizeSourceOptions:(id)arg1 subsampleFactor:(long long)arg2;
- (void)_init;
- (bool)_load:(out id*)arg1;
- (bool)_setAuxiliaryImagePropertiesFromCGProperties:(id)arg1 error:(out id*)arg2;
- (bool)_setGeometryFromProperties:(id)arg1 error:(out id*)arg2;
- (long long)alphaInfo;
- (id)auxiliaryImagePropertiesForAuxImageType:(long long)arg1;
- (id)auxiliaryImagesProperties;
- (bool)canPropagateOriginalAuxiliaryData;
- (id)cgImageProperties;
- (struct CGImageSource { }*)cgImageSource;
- (id)colorSpace;
- (long long)componentInfo;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)initWithImageSource:(struct CGImageSource { }*)arg1 identifier:(id)arg2;
- (id)initWithSettings:(id)arg1;
- (id)initWithURL:(id)arg1 UTI:(id)arg2 identifier:(id)arg3;
- (id)initWithURL:(id)arg1 UTI:(id)arg2 identifier:(id)arg3 options:(id)arg4;
- (id)initWithURL:(id)arg1 UTI:(id)arg2 settings:(id)arg3;
- (bool)load:(out id*)arg1;
- (id)loadEmbeddedThumbnailDataFromImageSource:(struct CGImageSource { }*)arg1 options:(id)arg2;
- (bool)loaded;
- (long long)normalizeSubsampleFactor:(long long)arg1;
- (long long)orientation;
- (struct { long long x1; long long x2; })pixelSizeWithSourceOptions:(id)arg1;
- (id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id*)arg5;
- (id)resolvedAuxiliaryImageNodeForPipelineState:(id)arg1 error:(out id*)arg2;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (void)setAlphaInfo:(long long)arg1;
- (void)setAuxiliaryImagesProperties:(id)arg1;
- (void)setCgImageProperties:(id)arg1;
- (void)setCgImageSource:(struct CGImageSource { }*)arg1;
- (void)setColorSpace:(id)arg1;
- (void)setComponentInfo:(long long)arg1;
- (void)setLoaded:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setSize:(struct { long long x1; long long x2; })arg1;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;
- (struct { long long x1; long long x2; })size;
- (long long)sourceOrientation;
- (bool)supportsPipelineState:(id)arg1 error:(out id*)arg2;
- (bool)useEmbeddedPreview;

@end
