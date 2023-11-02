
@interface MLModelTypeRegistry : NSObject

+ (id)sharedInstance;

- (Class)classForCompilingModelType:(int)arg1;
- (id)classesForLoadingModelType:(int)arg1;
- (id)classesForLoadingModelType:(int)arg1 configuration:(id)arg2 isUpdatable:(bool)arg3 isEncrypted:(bool)arg4;
- (id)init;
- (id)loadNeuralNetworkClasses:(bool)arg1 trainWithMLCompute:(bool)arg2;

@end
