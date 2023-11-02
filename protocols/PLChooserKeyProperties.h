
@protocol PLChooserKeyProperties

@required

- (bool)isDerivative;
- (unsigned int)recipeIDForAssetID:(id <PLAssetID>)arg1;
- (unsigned int)resourceType;
- (unsigned int)resourceVersion;

@end
