
@protocol ShazamEvents.ShazamEventsServer

@required

- (void)liveMusicEventWithEventID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC12ShazamEvents31LiveMusicEventXPCValueContainer *, void*
- (void)liveMusicScheduleWithArtistID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC12ShazamEvents34LiveMusicScheduleXPCValueContainer *, void*
- (void)liveMusicScheduleWithVenueID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _TtC12ShazamEvents39LiveMusicVenueScheduleXPCValueContainer *, void*

@end
