
@interface MPCModelRadioStationTrackGenericObjectBuilder : NSObject {
    MPPropertySet * _requestedProperties;
    struct { 
        unsigned int initialized : 1; 
        unsigned int trackNumber : 1; 
        unsigned int trackCount : 1; 
        struct { 
            unsigned int identifiers : 1; 
            unsigned int bookmarkTime : 1; 
            unsigned int shouldRememberBookmarkTime : 1; 
            unsigned int hasBeenPlayed : 1; 
            unsigned int startTime : 1; 
            unsigned int stopTime : 1; 
            unsigned int storeUbiquitousIdentifier : 1; 
            unsigned int userPlayCount : 1; 
        } playbackPosition; 
    }  _requestedSongProperties;
    MPModelStorePlatformMetadataGenericObjectBuilder * _storePlatformBuilder;
}

@property (nonatomic, readonly, copy) MPPropertySet *requestedProperties;

- (void).cxx_destruct;
- (id)genericObjectForRadioStationTrack:(id)arg1 radioStationContainsVideo:(bool)arg2 containerUniqueID:(id)arg3 userIdentity:(id)arg4;
- (id)initWithRequestedProperties:(id)arg1;
- (id)requestedProperties;

@end
