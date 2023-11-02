
@interface MLCYOLOLossLayer : MLCLossLayer {
    MLCYOLOLossDescriptor * _yoloLossDescriptor;
}

@property (nonatomic, readonly, copy) MLCYOLOLossDescriptor *yoloLossDescriptor;

+ (id)layerWithDescriptor:(id)arg1;

- (void).cxx_destruct;
- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (id)initWithLossDescriptor:(id)arg1;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2;
- (id)summarizedDOTDescription;
- (id)yoloLossDescriptor;

@end
