
@interface IKDOMSchema : NSObject {
    struct _xmlSchema { } * _schemaPtr;
}

- (void)dealloc;
- (id)initWithSchemaData:(id)arg1;
- (bool)validateDocument:(id)arg1 error:(id*)arg2;

@end
