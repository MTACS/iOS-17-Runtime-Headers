
@interface SGTransformerInstance : NSObject {
    Class  _modelClass;
    PMLSessionDescriptor * _sessionDescriptor;
    <PMLTransformerProtocol> * _transformer;
}

@property (nonatomic, retain) Class modelClass;
@property (nonatomic, retain) PMLSessionDescriptor *sessionDescriptor;
@property (nonatomic, retain) <PMLTransformerProtocol> *transformer;

+ (id)defaultSessionDescriptorForModelId:(id)arg1 featureVersion:(id)arg2 language:(id)arg3 windowAndNgrams:(id)arg4;
+ (id)defaultWindowAndNgrams;

- (void).cxx_destruct;
- (id)initWithTransformer:(id)arg1 sessionDescriptor:(id)arg2 modelClass:(Class)arg3;
- (Class)modelClass;
- (id)sessionDescriptor;
- (void)setModelClass:(Class)arg1;
- (void)setSessionDescriptor:(id)arg1;
- (void)setTransformer:(id)arg1;
- (id)trainingFeaturesOf:(id)arg1;
- (id)transformer;

@end
