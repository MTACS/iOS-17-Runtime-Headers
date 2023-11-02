
@interface MLParameterKey : MLKey

+ (id)beta1;
+ (id)beta2;
+ (id)biases;
+ (id)epochs;
+ (id)eps;
+ (id)learningRate;
+ (id)linkedModelFileName;
+ (id)linkedModelSearchPath;
+ (id)maxDepth;
+ (id)minChildWeight;
+ (id)miniBatchSize;
+ (id)momentum;
+ (id)numClasses;
+ (id)numTrees;
+ (id)numberOfNeighbors;
+ (id)objective;
+ (id)precisionRecallCurves;
+ (id)seed;
+ (id)shuffle;
+ (id)updateType;
+ (id)weights;

- (id)deletingPrefixingScope:(id)arg1;
- (id)initWithKeyName:(id)arg1;
- (id)scopedTo:(id)arg1;

@end
