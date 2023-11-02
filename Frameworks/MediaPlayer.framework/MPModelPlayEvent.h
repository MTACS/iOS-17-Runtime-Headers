
@interface MPModelPlayEvent : MPModelObject

@property (nonatomic, retain) MPModelAlbum *album;
@property (nonatomic, retain) MPModelArtist *artist;
@property (nonatomic, copy) NSDate *datePlayed;
@property (nonatomic, copy) NSString *featureName;
@property (nonatomic, retain) MPModelGroup *group;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic, retain) MPModelRadioStation *radioStation;
@property (nonatomic, readonly, copy) NSString *title;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)__MPModelPropertyPlayEventDatePlayed__MAPPING_MISSING__;
+ (void)__MPModelPropertyPlayEventFeatureName__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlayEventAlbum__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlayEventArtist__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlayEventGroup__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlayEventPlaylist__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPlayEventRadioStation__MAPPING_MISSING__;
+ (id)__album_KEY;
+ (id)__artist_KEY;
+ (id)__datePlayed_KEY;
+ (id)__featureName_KEY;
+ (id)__group_KEY;
+ (id)__playlist_KEY;
+ (id)__radioStation_KEY;
+ (id)playEventWithModelObject:(id)arg1 featureName:(id)arg2;

- (id)contentItemCollectionInfo;
- (id)genericObjectRepresentation;
- (long long)itemType;
- (id)title;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)mpc_radioContentReference;

@end
