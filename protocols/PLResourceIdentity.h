
@protocol PLResourceIdentity <NSObject>

@required

- (bool)isOriginalResource;
- (unsigned int)recipeID;
- (unsigned int)resourceType;
- (PLUniformTypeIdentifier *)uniformTypeIdentifier;
- (unsigned int)version;

@end
