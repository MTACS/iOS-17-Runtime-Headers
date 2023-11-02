
@protocol AFAudioPlaybackService <NSObject>

@required

- (void)prewarmRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AFAudioPlaybackRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startRequest:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: AFAudioPlaybackRequest *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopAllRequests:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)stopAllRequestsSynchronously;
- (void)stopRequest:(AFAudioPlaybackRequest *)arg1 immediately:(bool)arg2;

@end
