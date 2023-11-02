
@protocol REMeshPayload <NSSecureCoding>

@required

- (unsigned long long)bufferSize;
- (<MTLBuffer> *)bufferWithDevice:(id <MTLDevice>)arg1;
- (NSArray *)instances;
- (bool)isShareable;
- (NSArray *)models;
- (NSArray *)parts;
- (RESerializedPayload *)serializedData;
- (id /* block */)serializedDataBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)setSerializedData:(RESerializedPayload *)arg1;
- (void)setSerializedDataBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, RESerializedPayload *, id /* block */, void*

@end
