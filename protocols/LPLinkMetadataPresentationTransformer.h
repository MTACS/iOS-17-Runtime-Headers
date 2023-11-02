
@protocol LPLinkMetadataPresentationTransformer <NSObject>

@required

- (bool)canGeneratePresentationPropertiesForURL:(NSURL *)arg1;
- (LPWebLinkPresentationProperties *)presentationPropertiesForTransformer:(LPLinkMetadataPresentationTransformer *)arg1;

@end
