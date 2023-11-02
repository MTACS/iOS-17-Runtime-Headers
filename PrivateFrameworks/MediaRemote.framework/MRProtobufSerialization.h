
@interface MRProtobufSerialization : NSObject {
    NSDictionary * _dictionaryKeyToProtobufKeyMapping;
    id /* block */  _dictionaryValueToProtobufPostTransformer;
    id /* block */  _dictionaryValueToProtobufValueTransformer;
    Class  _protobufClass;
    NSDictionary * _protobufKeyToDictionaryKeyMapping;
    id /* block */  _protobufValueToDictionaryPostTransformer;
    id /* block */  _protobufValueToDictionaryValueTransformer;
}

@property (nonatomic, copy) NSDictionary *dictionaryKeyToProtobufKeyMapping;
@property (nonatomic, copy) id /* block */ dictionaryValueToProtobufPostTransformer;
@property (nonatomic, copy) id /* block */ dictionaryValueToProtobufValueTransformer;
@property (nonatomic, retain) Class protobufClass;
@property (nonatomic, copy) id /* block */ protobufValueToDictionaryPostTransformer;
@property (nonatomic, copy) id /* block */ protobufValueToDictionaryValueTransformer;

- (void).cxx_destruct;
- (id)createDictionaryFromProtobuf:(id)arg1;
- (id)createProtobufFromDictionary:(id)arg1;
- (id)dictionaryKeyToProtobufKeyMapping;
- (id /* block */)dictionaryValueToProtobufPostTransformer;
- (id /* block */)dictionaryValueToProtobufValueTransformer;
- (Class)protobufClass;
- (id /* block */)protobufValueToDictionaryPostTransformer;
- (id /* block */)protobufValueToDictionaryValueTransformer;
- (void)setDictionaryKeyToProtobufKeyMapping:(id)arg1;
- (void)setDictionaryValueToProtobufPostTransformer:(id /* block */)arg1;
- (void)setDictionaryValueToProtobufValueTransformer:(id /* block */)arg1;
- (void)setProtobufClass:(Class)arg1;
- (void)setProtobufValueToDictionaryPostTransformer:(id /* block */)arg1;
- (void)setProtobufValueToDictionaryValueTransformer:(id /* block */)arg1;

@end
