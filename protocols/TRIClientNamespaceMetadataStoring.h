
@protocol TRIClientNamespaceMetadataStoring <NSObject>

@required

- (TRIClientNamespaceMetadata *)loadNamespaceMetadataForNamespaceName:(NSString *)arg1 error:(id*)arg2;
- (NSURL *)urlForNamespaceMetadataForNamespaceName:(NSString *)arg1;

@end
