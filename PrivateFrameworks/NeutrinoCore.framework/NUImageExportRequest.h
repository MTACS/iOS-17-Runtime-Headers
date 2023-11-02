
@interface NUImageExportRequest : NUExportRequest <NUTimeBased> {
    bool  _applyOrientationAsMetadata;
    NSDictionary * _auxImages;
    NUColorSpace * _colorSpace;
    NUImageExportFormat * _format;
    NSDictionary * _imageProperties;
    bool  _renderToData;
    bool  _renderWithIOSurface;
}

@property (nonatomic) bool applyOrientationAsMetadata;
@property (copy) NSDictionary *auxImages;
@property (nonatomic, retain) NUColorSpace *colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NUImageExportFormat *format;
@property (readonly) unsigned long long hash;
@property (copy) NSDictionary *imageProperties;
@property (nonatomic) bool renderToData;
@property (nonatomic) bool renderWithIOSurface;
@property (readonly) Class superclass;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (void).cxx_destruct;
- (bool)applyOrientationAsMetadata;
- (id)auxImages;
- (id)colorSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)format;
- (id)imageProperties;
- (id)initWithComposition:(id)arg1;
- (id)initWithComposition:(id)arg1 destinationURL:(id)arg2;
- (id)initWithComposition:(id)arg1 exportFormat:(id)arg2;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (bool)renderToData;
- (bool)renderWithIOSurface;
- (void)setApplyOrientationAsMetadata:(bool)arg1;
- (void)setAuxImages:(id)arg1;
- (void)setColorSpace:(id)arg1;
- (void)setFormat:(id)arg1;
- (void)setImageProperties:(id)arg1;
- (void)setRenderToData:(bool)arg1;
- (void)setRenderWithIOSurface:(bool)arg1;
- (void)submit:(id /* block */)arg1;

@end
