
@protocol TFRegistrationContainer <NSObject>

@required

- (<TFDefinition> *)registerClass:(void *)arg1 factory:(void *)arg2; // needs 2 arg types, found 7: Class, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, id /* block */, <TFResolver> *, void*
- (<TFDefinition> *)registerClass:(void *)arg1 name:(void *)arg2 factory:(void *)arg3; // needs 3 arg types, found 8: Class, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, id /* block */, <TFResolver> *, void*
- (<TFDefinition> *)registerProtocol:(void *)arg1 factory:(void *)arg2; // needs 2 arg types, found 7: Protocol *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, id /* block */, <TFResolver> *, void*
- (<TFDefinition> *)registerProtocol:(void *)arg1 name:(void *)arg2 factory:(void *)arg3; // needs 3 arg types, found 8: Protocol *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, id /* block */, <TFResolver> *, void*
- (<TFDefinition> *)registerUncheckedProtocol:(void *)arg1 factory:(void *)arg2; // needs 2 arg types, found 7: Protocol *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, id /* block */, <TFResolver> *, void*
- (<TFDefinition> *)registerUncheckedProtocol:(void *)arg1 name:(void *)arg2 factory:(void *)arg3; // needs 3 arg types, found 8: Protocol *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, id /* block */, <TFResolver> *, void*

@end
