
@interface BSProtobufSerialization : NSObject

+ (id)buildSchemaForClass:(Class)arg1 builder:(id /* block */)arg2;
+ (id)decodeObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3;
+ (id)encodeObject:(id)arg1 error:(id*)arg2;

@end
