
@interface MPModelStorePlatformMetadataGenericObjectBuilder : NSObject {
    MPStoreModelPlaybackPositionBuilder * _playbackPositionBuilder;
    MPPropertySet * _requestedProperties;
    struct { 
        unsigned int initialized : 1; 
        unsigned int title : 1; 
        unsigned int duration : 1; 
        unsigned int trackNumber : 1; 
        unsigned int trackCount : 1; 
        unsigned int discNumber : 1; 
        unsigned int grouping : 1; 
        unsigned int explicit : 1; 
        unsigned int artistUploadedContent : 1; 
        unsigned int hasVideo : 1; 
        unsigned int artwork : 1; 
        unsigned int copyrightText : 1; 
        unsigned int keepLocalEnableState : 1; 
        unsigned int keepLocalManagedStatus : 1; 
        unsigned int keepLocalManagedStatusReason : 1; 
        unsigned int keepLocalConstraints : 1; 
        unsigned int hasCloudSyncSource : 1; 
        unsigned int localFileAsset : 1; 
        unsigned int libraryAdded : 1; 
        unsigned int libraryAddEligible : 1; 
        unsigned int shouldShowComposer : 1; 
        unsigned int volumeNormalization : 1; 
        unsigned int year : 1; 
        unsigned int userRating : 1; 
        unsigned int cloudStatus : 1; 
        unsigned int gaplessInfo : 1; 
        unsigned int volumeAdjustment : 1; 
        unsigned int traits : 1; 
        unsigned int supportsExtendedLyricsAttribute : 1; 
        unsigned int isFavorite : 1; 
        unsigned int isDisliked : 1; 
        unsigned int dateFavorited : 1; 
        unsigned int hasCredits : 1; 
        unsigned int classicalWork : 1; 
        unsigned int classicalMovement : 1; 
        unsigned int classicalMovementCount : 1; 
        unsigned int classicalMovementNumber : 1; 
        struct { 
            unsigned int identifiers : 1; 
            unsigned int title : 1; 
            unsigned int releaseDate : 1; 
            unsigned int year : 1; 
            unsigned int artist : 1; 
        } album; 
        struct { 
            unsigned int identifiers : 1; 
            unsigned int name : 1; 
        } artist; 
        struct { 
            unsigned int identifiers : 1; 
            unsigned int name : 1; 
        } composer; 
        struct { 
            unsigned int identifiers : 1; 
            unsigned int name : 1; 
        } genre; 
        struct { 
            unsigned int identifiers : 1; 
        } homeSharingAsset; 
        struct { 
            unsigned int identifiers : 1; 
            unsigned int text : 1; 
            unsigned int hasStoreLyrics : 1; 
            unsigned int hasTimeSyncedLyrics : 1; 
        } lyrics; 
    }  _requestedSongProperties;
    MPStoreModelStoreAssetBuilder * _storeAssetBuilder;
    MPPropertySet * _storeAssetProperties;
}

@property (nonatomic, readonly, copy) MPPropertySet *requestedProperties;

- (void).cxx_destruct;
- (id)genericObjectForStorePlatformMetadata:(id)arg1 radioStationContainsVideo:(bool)arg2 userIdentity:(id)arg3;
- (id)initWithRequestedProperties:(id)arg1;
- (id)requestedProperties;

@end
