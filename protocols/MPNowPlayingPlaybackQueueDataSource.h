
@protocol MPNowPlayingPlaybackQueueDataSource <NSObject>

@required

- (MPNowPlayingContentItem *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 contentItemForID:(NSString *)arg2;
- (NSString *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 contentItemIDForOffset:(long long)arg2;

@optional

- (MPNowPlayingContentItem *)contentItemForOffset:(long long)arg1;
- (NSProgress *)nowPlayingInfoCenter:(void *)arg1 artworkForContentItem:(void *)arg2 size:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: MPNowPlayingInfoCenter *, MPNowPlayingContentItem *, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, void*
- (NSProgress *)nowPlayingInfoCenter:(void *)arg1 availableLanguageOptionsForContentItem:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: MPNowPlayingInfoCenter *, MPNowPlayingContentItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSString *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 childContentItemIDAtIndex:(long long)arg2 ofItem:(MPNowPlayingContentItem *)arg3;
- (NSArray *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 contentItemIDsFromOffset:(long long)arg2 toOffset:(long long)arg3 nowPlayingIndex:(long long*)arg4;
- (NSProgress *)nowPlayingInfoCenter:(void *)arg1 currentLanguageOptionsForContentItem:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: MPNowPlayingInfoCenter *, MPNowPlayingContentItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 didEndMigrationWithIdentifier:(NSString *)arg2 error:(NSError *)arg3;
- (void)nowPlayingInfoCenter:(void *)arg1 getTransportablePlaybackSessionRepresentationForRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: MPNowPlayingInfoCenter *, <MPNowPlayingInfoTransportableSessionRequest> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPNowPlayingInfoTransportableSessionResponse *, NSError *, void*
- (void)nowPlayingInfoCenter:(void *)arg1 getTransportablePlaybackSessionRepresentationWithCompletion:(void *)arg2; // needs 2 arg types, found 8: MPNowPlayingInfoCenter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (NSProgress *)nowPlayingInfoCenter:(void *)arg1 infoForContentItem:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: MPNowPlayingInfoCenter *, MPNowPlayingContentItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (NSProgress *)nowPlayingInfoCenter:(void *)arg1 lyricsForContentItem:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: MPNowPlayingInfoCenter *, MPNowPlayingContentItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPNowPlayingInfoLyricsItem *, NSError *, void*
- (NSProgress *)nowPlayingInfoCenter:(void *)arg1 remoteArtworkForContentItem:(void *)arg2 format:(void *)arg3 size:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: MPNowPlayingInfoCenter *, MPNowPlayingContentItem *, NSString *, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPNowPlayingContentItemRemoteArtwork *, NSError *, void*
- (void)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 willBeginSessionMigrationWithIdentifier:(NSString *)arg2;
- (NSArray *)participantsForNowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1;
- (NSString *)playbackQueueIdentifierForNowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1;

@end
