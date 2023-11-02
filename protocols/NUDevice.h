
@protocol NUDevice <NSObject>

@required

- (long long)defaultSampleMode;
- (void)executeMetal:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLCommandBuffer> *, void*
- (unsigned long long)family;
- (bool)hasMetalSupport;
- (<NURenderer> *)highPriorityLowMemoryRendererWithoutIntermediateCaching:(out id*)arg1;
- (<NURenderer> *)lowPriorityLowMemoryRendererWithoutIntermediateCaching:(out id*)arg1;
- (<NURenderer> *)lowPriorityRenderer:(out id*)arg1;
- (<NURenderer> *)lowPriorityRendererWithoutIntermediateCaching:(out id*)arg1;
- (<MTLDevice> *)metalDevice;
- (NSString *)model;
- (NSString *)name;
- (<NURenderer> *)renderer:(out id*)arg1;
- (<NURenderer> *)rendererWithOptions:(unsigned long long)arg1 error:(out id*)arg2;
- (<NURenderer> *)rendererWithoutIntermediateCaching:(out id*)arg1;
- (bool)supportsPixelFormat:(NUPixelFormat *)arg1;

@end
