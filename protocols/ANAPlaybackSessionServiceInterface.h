
@protocol ANAPlaybackSessionServiceInterface <NSObject>

@required

- (void)lastPlayedAnnouncementInfoForEndpointID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)playbackStateForEndpointID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)resumeWithEndpointID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
