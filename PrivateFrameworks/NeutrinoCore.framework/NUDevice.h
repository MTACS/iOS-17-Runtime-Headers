
@interface NUDevice : NSObject <NUDevice> {
    <MTLCommandQueue> * _commandQueue;
    <NURenderer> * _lowPriorityRenderer;
    <MTLDevice> * _metalDevice;
    NSString * _model;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    <NURenderer> * _renderer;
    NSMutableDictionary * _renderers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) long long defaultSampleMode;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long family;
@property (nonatomic, readonly) bool hasMetalSupport;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NURenderer> *lowPriorityRenderer;
@property (nonatomic, readonly) <MTLDevice> *metalDevice;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) <NURenderer> *renderer;
@property (nonatomic, readonly) NSMutableDictionary *renderers;
@property (nonatomic, readonly) bool shouldRenderUsingMetal;
@property (readonly) Class superclass;

+ (id)_ciContextOptionsForRendererOptions:(unsigned long long)arg1;

- (void).cxx_destruct;
- (long long)_defaultSampleMode;
- (id)_metalCommandQueue;
- (id)_newRendererWithCIContextOptions:(id)arg1 error:(out id*)arg2;
- (id)_newRendererWithOptions:(unsigned long long)arg1 error:(out id*)arg2;
- (long long)_preferredSampleMode;
- (id)_rendererWithOptions:(unsigned long long)arg1 error:(out id*)arg2;
- (void)clearCaches;
- (void)clearRenderers;
- (long long)defaultSampleMode;
- (id)description;
- (void)executeMetal:(id /* block */)arg1;
- (unsigned long long)family;
- (bool)hasMetalSupport;
- (id)highPriorityLowMemoryRendererWithoutIntermediateCaching:(out id*)arg1;
- (id)init;
- (id)initWithName:(id)arg1 model:(id)arg2 metalDevice:(id)arg3;
- (id)lowPriorityLowMemoryRendererWithoutIntermediateCaching:(out id*)arg1;
- (id)lowPriorityRenderer;
- (id)lowPriorityRenderer:(out id*)arg1;
- (id)lowPriorityRendererWithoutIntermediateCaching:(out id*)arg1;
- (id)metalDevice;
- (id)model;
- (id)name;
- (id)renderer;
- (id)renderer:(out id*)arg1;
- (id)rendererWithOptions:(unsigned long long)arg1 error:(out id*)arg2;
- (id)rendererWithoutIntermediateCaching:(out id*)arg1;
- (id)renderers;
- (bool)shouldLogRendererUsed;
- (bool)shouldRenderUsingMetal;
- (bool)supportsPixelFormat:(id)arg1;

@end
