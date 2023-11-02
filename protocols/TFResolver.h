
@protocol TFResolver <NSObject>

@required

- (id)resolveClass:(Class)arg1;
- (id)resolveClass:(void *)arg1 contextBlock:(void *)arg2; // needs 2 arg types, found 7: Class, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TFContext> *, void*
- (id)resolveClass:(Class)arg1 name:(NSString *)arg2;
- (id)resolveClass:(void *)arg1 name:(void *)arg2 contextBlock:(void *)arg3; // needs 3 arg types, found 8: Class, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TFContext> *, void*
- (id)resolveOptionalClass:(Class)arg1;
- (id)resolveOptionalClass:(void *)arg1 contextBlock:(void *)arg2; // needs 2 arg types, found 7: Class, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TFContext> *, void*
- (id)resolveOptionalClass:(Class)arg1 name:(NSString *)arg2;
- (id)resolveOptionalClass:(void *)arg1 name:(void *)arg2 contextBlock:(void *)arg3; // needs 3 arg types, found 8: Class, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TFContext> *, void*
- (id)resolveOptionalProtocol:(Protocol *)arg1;
- (id)resolveOptionalProtocol:(void *)arg1 contextBlock:(void *)arg2; // needs 2 arg types, found 7: Protocol *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TFContext> *, void*
- (id)resolveOptionalProtocol:(Protocol *)arg1 name:(NSString *)arg2;
- (id)resolveOptionalProtocol:(void *)arg1 name:(void *)arg2 contextBlock:(void *)arg3; // needs 3 arg types, found 8: Protocol *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TFContext> *, void*
- (id)resolveProtocol:(Protocol *)arg1;
- (id)resolveProtocol:(void *)arg1 contextBlock:(void *)arg2; // needs 2 arg types, found 7: Protocol *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TFContext> *, void*
- (id)resolveProtocol:(Protocol *)arg1 name:(NSString *)arg2;
- (id)resolveProtocol:(void *)arg1 name:(void *)arg2 contextBlock:(void *)arg3; // needs 3 arg types, found 8: Protocol *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TFContext> *, void*

@end
