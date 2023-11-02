
@interface MPStoreModelMovieBuilder : MPStoreModelObjectBuilder {
    MPStoreModelMovieMediaClipBuilder * _mediaClipBuilder;
    MPStoreModelPlaybackPositionBuilder * _playbackPositionBuilder;
    struct { 
        unsigned int initialized : 1; 
        unsigned int title : 1; 
        unsigned int description : 1; 
        unsigned int duration : 1; 
        unsigned int releaseDate : 1; 
        unsigned int explicitRating : 1; 
        unsigned int tagline : 1; 
        unsigned int artwork : 1; 
        unsigned int editorialArtwork : 1; 
        unsigned int keepLocalEnableState : 1; 
        unsigned int keepLocalManagedStatus : 1; 
        unsigned int keepLocalManagedStatusReason : 1; 
        unsigned int keepLocalConstraints : 1; 
        unsigned int hasCloudSyncSource : 1; 
        unsigned int localFileAsset : 1; 
        unsigned int libraryAdded : 1; 
        unsigned int libraryAddEligible : 1; 
    }  _requestedMovieProperties;
    MPStoreModelStoreAssetBuilder * _storeAssetBuilder;
    MPPropertySet * _storeAssetProperties;
}

+ (id)allSupportedProperties;

- (void).cxx_destruct;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;

@end
