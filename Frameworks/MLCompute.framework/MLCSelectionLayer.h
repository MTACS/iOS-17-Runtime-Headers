
@interface MLCSelectionLayer : MLCLayer

+ (id)layer;
+ (bool)supportsDataType:(int)arg1 onDevice:(id)arg2;

- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (id)resultTensorFromSources:(id)arg1;
- (id)summarizedDOTDescription;

@end
