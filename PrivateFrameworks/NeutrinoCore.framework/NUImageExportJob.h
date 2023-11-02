
@interface NUImageExportJob : NUExportJob {
    NSData * _destinationData;
}

- (void).cxx_destruct;
- (id)_filterProperties:(id)arg1;
- (void)cleanUp;
- (struct CGImage { }*)copyCGImageWithIOSurface:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 colorSpace:(id)arg3 error:(out id*)arg4;
- (id)imageDestinationOptions;
- (id)imageExportRequest;
- (id)initWithExportRequest:(id)arg1;
- (id)initWithImageExportRequest:(id)arg1;
- (id)prepareNodeWithPipelineState:(id)arg1 error:(out id*)arg2;
- (bool)render:(out id*)arg1;
- (id)result;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;

@end
