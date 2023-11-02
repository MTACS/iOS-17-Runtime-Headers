
@interface MPStoreModelArtistBuilder : MPStoreModelObjectBuilder {
    struct { 
        unsigned int initialized : 1; 
        unsigned int name : 1; 
        unsigned int hasBiography : 1; 
        unsigned int hasSocialPosts : 1; 
        unsigned int artwork : 1; 
        unsigned int editorialArtwork : 1; 
        unsigned int classicalExperienceAvailable : 1; 
        unsigned int isFavorite : 1; 
        unsigned int isDisliked : 1; 
        unsigned int dateFavorited : 1; 
        struct { 
            unsigned int identifiers : 1; 
            unsigned int name : 1; 
        } genre; 
    }  _requestedArtistProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;

@end
