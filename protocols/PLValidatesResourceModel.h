
@protocol PLValidatesResourceModel <NSObject>

@required

- (NSArray *)validateForAssetID:(id <PLAssetID>)arg1 resourceIdentity:(id <PLResourceIdentity>)arg2;

@end
