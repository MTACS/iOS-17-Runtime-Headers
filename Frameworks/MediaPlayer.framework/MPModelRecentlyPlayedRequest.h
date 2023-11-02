
@interface MPModelRecentlyPlayedRequest : MPStoreModelRequest

+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;
+ (bool)supportsSecureCoding;

- (id)newOperationWithResponseHandler:(id /* block */)arg1;

@end
