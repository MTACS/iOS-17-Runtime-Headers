
@interface WFSerializableContentProviderEntry : NSObject {
    id /* block */  _deserializationBlock;
    id /* block */  _serializationBlock;
}

@property (nonatomic, readonly) id /* block */ deserializationBlock;
@property (nonatomic, readonly) id /* block */ serializationBlock;

- (void).cxx_destruct;
- (id /* block */)deserializationBlock;
- (id)initWithSerializedRepresentationBlock:(id /* block */)arg1 deserializationBlock:(id /* block */)arg2;
- (id /* block */)serializationBlock;

@end
