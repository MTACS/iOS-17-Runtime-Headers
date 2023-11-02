
@interface MPStoreModelRecordLabelBuilder : MPStoreModelObjectBuilder {
    struct { 
        unsigned int initialized : 1; 
        unsigned int name : 1; 
        unsigned int descriptionText : 1; 
        unsigned int shortDescriptionText : 1; 
        unsigned int artwork : 1; 
        unsigned int editorialArtwork : 1; 
    }  _requestedRecordLabelProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;

@end
