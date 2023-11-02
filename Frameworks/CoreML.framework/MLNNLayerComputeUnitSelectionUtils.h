
@interface MLNNLayerComputeUnitSelectionUtils : NSObject

+ (id)getLayerHints:(id)arg1 error:(id*)arg2;
+ (id)getLayerTypes:(id)arg1 error:(id*)arg2;
+ (id)getNetJson:(id)arg1 error:(id*)arg2;
+ (bool)undoLastHintUpdate:(id)arg1 error:(id*)arg2;
+ (bool)updateHints:(id)arg1 hints:(id)arg2 error:(id*)arg3;

@end
