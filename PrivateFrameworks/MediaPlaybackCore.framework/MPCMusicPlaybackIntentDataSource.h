
@interface MPCMusicPlaybackIntentDataSource : NSObject <MPCPlaybackIntentDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_getPlaybackContextForIntent:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getArchiveFromIntent:(id)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (void)getRemotePlaybackQueueFromIntent:(id)arg1 destination:(long long)arg2 completion:(id /* block */)arg3;
- (void)getRepresentativeObjectFromIntent:(id)arg1 properties:(id)arg2 completion:(id /* block */)arg3;

@end
