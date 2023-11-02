
@protocol ANLocalPlaybackSessionServiceInterface <ANAPlaybackSessionServiceInterface>

@required

- (void)sendPlaybackCommand:(void *)arg1 forEndpointID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: ANPlaybackCommand *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
