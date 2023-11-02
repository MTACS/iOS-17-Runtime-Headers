
@interface MPCAssistantCommand : NSObject

- (void)sendCommand:(unsigned int)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)sendCommandWithResult:(unsigned int)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)sendPlaybackArchive:(id)arg1 toDestination:(id)arg2 completion:(id /* block */)arg3;
- (void)sendPlaybackArchive:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)sendPlaybackArchiveWithResult:(id)arg1 toDestination:(id)arg2 completion:(id /* block */)arg3;
- (void)sendPlaybackArchiveWithResult:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)sendPlaybackQueue:(id)arg1 toDestination:(id)arg2 completion:(id /* block */)arg3;
- (void)sendPlaybackQueue:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)sendPlaybackQueueWithResult:(id)arg1 toDestination:(id)arg2 completion:(id /* block */)arg3;
- (void)sendPlaybackQueueWithResult:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;

@end
