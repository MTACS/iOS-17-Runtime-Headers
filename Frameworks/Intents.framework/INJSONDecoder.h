
@interface INJSONDecoder : NSObject

- (id)_decodeObjectOfClass:(Class)arg1 withCodableDescription:(id)arg2 from:(id)arg3 outCodableDescription:(id*)arg4;
- (id)_decodeWithCodableAttribute:(id)arg1 from:(id)arg2;
- (void)decodeObject:(id)arg1 withCodableDescription:(id)arg2 from:(id)arg3;
- (id)decodeObjectOfClass:(Class)arg1 from:(id)arg2;
- (id)decodeObjectsOfClass:(Class)arg1 from:(id)arg2;
- (id)decodeWithCodableAttribute:(id)arg1 from:(id)arg2;

@end
