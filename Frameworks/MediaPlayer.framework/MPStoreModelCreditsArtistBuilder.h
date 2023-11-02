
@interface MPStoreModelCreditsArtistBuilder : MPStoreModelObjectBuilder {
    struct { 
        unsigned int initialized : 1; 
        unsigned int name : 1; 
        unsigned int artwork : 1; 
    }  _requestedCreditsArtistProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;

@end
