
@protocol TSCEResolverLocatingProtocol <NSObject>

@required

- (<TSCEResolverContainer> *)resolverContainerMatchingName:(NSString *)arg1 inDocumentRoot:(TSKDocumentRoot *)arg2;
- (<TSCEReferenceResolving> *)resolverMatchingName:(NSString *)arg1 inDocumentRoot:(TSKDocumentRoot *)arg2 contextResolver:(id <TSCEReferenceResolving>)arg3;
- (<TSCEReferenceResolving> *)resolverMatchingNameWithContextContainer:(NSString *)arg1 inDocumentRoot:(TSKDocumentRoot *)arg2 contextContainerName:(NSString *)arg3;

@end
