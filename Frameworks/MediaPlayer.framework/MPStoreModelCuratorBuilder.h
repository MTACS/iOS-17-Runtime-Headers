
@interface MPStoreModelCuratorBuilder : MPStoreModelObjectBuilder {
    struct { 
        unsigned int initialized : 1; 
        unsigned int name : 1; 
        unsigned int shortName : 1; 
        unsigned int hasSocialPosts : 1; 
        unsigned int editorNotes : 1; 
        unsigned int shortEditorNotes : 1; 
        unsigned int curatorKind : 1; 
        unsigned int curatorSubKind : 1; 
        unsigned int editorialArtwork : 1; 
        unsigned int brandLogoArtwork : 1; 
    }  _requestedCuratorProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;

@end
