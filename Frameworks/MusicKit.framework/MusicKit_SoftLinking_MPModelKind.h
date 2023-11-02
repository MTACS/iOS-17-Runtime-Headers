
@interface MusicKit_SoftLinking_MPModelKind : NSObject {
    MPModelKind * _underlyingKind;
}

@property (nonatomic, readonly) MPModelKind *_underlyingKind;

+ (id)_defaultAlbumKind;
+ (id)_defaultAlbumKindForTracks;
+ (id)_defaultArtistKind;
+ (id)_defaultComposerKind;
+ (id)_defaultCuratorKind;
+ (id)_defaultFileAssetKind;
+ (id)_defaultGenreKind;
+ (id)_defaultMovieKind;
+ (id)_defaultPlaylistEntryKind;
+ (id)_defaultPlaylistEntryKindForMusicVideos;
+ (id)_defaultPlaylistEntryKindForSongs;
+ (id)_defaultPlaylistEntryKindForTracks;
+ (id)_defaultPlaylistKind;
+ (id)_defaultPlaylistKindExcludingEmpty;
+ (id)_defaultRadioStationKind;
+ (id)_defaultRecentlyAddedObjectKind;
+ (id)_defaultRecordLabelKind;
+ (id)_defaultSocialPersonKind;
+ (id)_defaultSongKind;
+ (id)_defaultSongKindForAudioOnly;
+ (id)_defaultSongKindForTracks;
+ (id)_defaultTVEpisodeKind;
+ (id)_defaultTVSeasonKind;
+ (id)_defaultTVShowKind;
+ (id)_modelKindForModelObjectType:(long long)arg1;
+ (id)_sanitizeKind:(id)arg1;
+ (id)_sanitizePlaylistEntryKind:(id)arg1;
+ (id)_sanitizeSongKind:(id)arg1;
+ (id)_songKindForVariants:(unsigned long long)arg1;
+ (id)_songKindForVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;
+ (id)playlistEntryKindWithKinds:(id)arg1;
+ (bool)shouldShowAllExtendedVideoContent;

- (void).cxx_destruct;
- (id)_initWithUnderlyingKind:(id)arg1;
- (id)_underlyingKind;

@end
