
@interface MLCSliceLayer : MLCLayer {
    NSArray * _end;
    NSArray * _start;
    NSArray * _stride;
}

@property (nonatomic, readonly, copy) NSArray *end;
@property (nonatomic, readonly, copy) NSArray *start;
@property (nonatomic, readonly, copy) NSArray *stride;

+ (id)sliceLayerWithStart:(id)arg1 end:(id)arg2 stride:(id)arg3;

- (void).cxx_destruct;
- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (id)end;
- (id)initSliceLayerWithStart:(id)arg1 end:(id)arg2 stride:(id)arg3;
- (bool)isStaticBatchSize;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (unsigned long long)resultSizeForDimension:(unsigned long long)arg1;
- (id)resultTensorFromSources:(id)arg1;
- (id)start;
- (id)stride;
- (id)summarizedDOTDescription;

@end
