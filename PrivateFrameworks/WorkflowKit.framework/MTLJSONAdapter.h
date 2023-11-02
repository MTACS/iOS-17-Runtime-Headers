
@interface MTLJSONAdapter : NSObject {
    NSMapTable * _JSONAdaptersByModelClass;
    NSDictionary * _JSONKeyPathsByPropertyKey;
    Class  _modelClass;
    NSDictionary * _valueTransformersByPropertyKey;
}

@property (nonatomic, readonly) NSMapTable *JSONAdaptersByModelClass;
@property (nonatomic, readonly, copy) NSDictionary *JSONKeyPathsByPropertyKey;
@property (nonatomic, readonly) <MTLJSONSerializing> *model;
@property (nonatomic, readonly) Class modelClass;
@property (nonatomic, readonly, copy) NSDictionary *valueTransformersByPropertyKey;

+ (id)JSONArrayFromModels:(id)arg1;
+ (id)JSONArrayFromModels:(id)arg1 error:(id*)arg2;
+ (id)JSONDictionaryFromModel:(id)arg1;
+ (id)JSONDictionaryFromModel:(id)arg1 error:(id*)arg2;
+ (id)NSURLJSONTransformer;
+ (id)NSUUIDJSONTransformer;
+ (id)arrayTransformerWithModelClass:(Class)arg1;
+ (id)dictionaryTransformerWithModelClass:(Class)arg1;
+ (id)modelOfClass:(Class)arg1 fromJSONDictionary:(id)arg2 error:(id*)arg3;
+ (id)modelsOfClass:(Class)arg1 fromJSONArray:(id)arg2 error:(id*)arg3;
+ (id)transformerForModelPropertiesOfClass:(Class)arg1;
+ (id)transformerForModelPropertiesOfObjCType:(const char *)arg1;
+ (id)valueTransformersForModelClass:(Class)arg1;

- (void).cxx_destruct;
- (id)JSONAdapterForModelClass:(Class)arg1 error:(id*)arg2;
- (id)JSONAdaptersByModelClass;
- (id)JSONDictionaryFromModel:(id)arg1 error:(id*)arg2;
- (id)JSONKeyPathsByPropertyKey;
- (id)init;
- (id)initWithModelClass:(Class)arg1;
- (Class)modelClass;
- (id)modelFromJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)serializablePropertyKeys:(id)arg1 forModel:(id)arg2;
- (id)valueTransformersByPropertyKey;

@end
