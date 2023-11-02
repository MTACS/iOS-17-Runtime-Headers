
@interface MPStoreModelRadioStationBuilder : MPStoreModelObjectBuilder {
    struct { 
        unsigned int initialized : 1; 
        unsigned int beats1 : 1; 
        unsigned int name : 1; 
        unsigned int editorNotes : 1; 
        unsigned int shortEditorNotes : 1; 
        unsigned int explicit : 1; 
        unsigned int type : 1; 
        unsigned int subtype : 1; 
        unsigned int artwork : 1; 
        unsigned int stationGlyph : 1; 
        unsigned int attributionLabel : 1; 
        unsigned int providerName : 1; 
        unsigned int live : 1; 
        unsigned int startingAirDate : 1; 
        unsigned int endingAirDate : 1; 
        unsigned int subscriptionRequired : 1; 
    }  _requestedRadioStationProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;

@end
