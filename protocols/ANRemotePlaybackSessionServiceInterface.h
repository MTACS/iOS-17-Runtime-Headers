
@protocol ANRemotePlaybackSessionServiceInterface <ANAPlaybackSessionServiceInterface>

@required

- (void)endSessionWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setPlaybackStartedForAnnouncement:(NSString *)arg1;
- (void)setPlaybackStoppedForAnnouncement:(NSString *)arg1;
- (void)startSessionForGroupID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
