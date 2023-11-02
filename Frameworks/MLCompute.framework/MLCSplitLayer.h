
@interface MLCSplitLayer : MLCLayer {
    unsigned long long  _dimension;
    unsigned long long  _splitCount;
    NSArray * _splitSectionLengths;
}

@property (nonatomic, readonly) unsigned long long dimension;
@property (nonatomic, readonly) unsigned long long splitCount;
@property (nonatomic, readonly, copy) NSArray *splitSectionLengths;

+ (id)layerWithSplitCount:(unsigned long long)arg1 dimension:(unsigned long long)arg2;
+ (id)layerWithSplitSectionLengths:(id)arg1 dimension:(unsigned long long)arg2;
+ (bool)supportsDataType:(int)arg1 onDevice:(id)arg2;

- (void).cxx_destruct;
- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensors:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)deviceMemorySizeWithOptimizer:(id)arg1 device:(id)arg2;
- (unsigned long long)dimension;
- (id)initWithSplitCount:(unsigned long long)arg1 splitSectionLengths:(id)arg2 dimension:(unsigned long long)arg3;
- (bool)isStaticBatchSize;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (unsigned long long)splitCount;
- (id)splitSectionLengths;
- (id)summarizedDOTDescription;

@end
