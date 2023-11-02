
@interface MLCPoolingLayer : MLCLayer {
    MLCPoolingDescriptor * _descriptor;
}

@property (nonatomic, readonly, copy) MLCPoolingDescriptor *descriptor;

// Image: /System/Library/Frameworks/MLCompute.framework/MLCompute

+ (id)layerWithDescriptor:(id)arg1;
+ (bool)supportsDataType:(int)arg1 onDevice:(id)arg2;

- (void).cxx_destruct;
- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (id)descriptor;
- (id)initWithDescriptor:(id)arg1;
- (id)summarizedDOTDescription;

// Image: /System/Library/Frameworks/CoreML.framework/CoreML

+ (id)poolingLayer:(const void*)arg1 error:(id*)arg2;

@end
