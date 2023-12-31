
@interface MPStoreModelPlaybackPositionBuilder : MPStoreModelObjectBuilder {
    struct { 
        unsigned int initialized : 1; 
        unsigned int bookmarkTime : 1; 
        unsigned int shouldRememberBookmarkTime : 1; 
        unsigned int hasBeenPlayed : 1; 
        unsigned int startTime : 1; 
        unsigned int stopTime : 1; 
        unsigned int storeUbiquitousIdentifier : 1; 
        unsigned int userPlayCount : 1; 
    }  _requestedPlaybackPositionProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;

@end
