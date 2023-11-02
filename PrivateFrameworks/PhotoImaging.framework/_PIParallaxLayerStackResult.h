
@interface _PIParallaxLayerStackResult : _NURenderResult <PIParallaxLayerStackResult> {
    PFParallaxLayerStack * _layerStack;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PFParallaxLayerStack *layerStack;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)layerStack;
- (void)setLayerStack:(id)arg1;

@end
