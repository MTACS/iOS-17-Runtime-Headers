
@protocol _ArchiveReader <NSObject>

@required

+ (NSString *)modelName;

- (void)copyLayerShapesToContainer:(MLNeuralNetworkContainer *)arg1;
- (NSArray *)layerInfos;
- (MLNeuralNetworksCompileTimeParams *)loadUpdatableParams:(id*)arg1;
- (NSString *)modelPath;
- (NSDictionary *)transformParams;

@end
