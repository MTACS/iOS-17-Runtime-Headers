
@interface PXStoryPersistableRecipeSongResourceProducer : NSObject <PXStorySongResourceProducer> {
    PXStoryConfiguration * _configuration;
    <PFStoryRecipe> * _persistableRecipe;
    unsigned long long  logContext;
}

@property (nonatomic) unsigned long long logContext;

- (void).cxx_destruct;
- (void)_handleAppleMusicPlaybackStatus:(long long)arg1 error:(id)arg2 parentProgress:(id)arg3 options:(unsigned long long)arg4 resultHandler:(id /* block */)arg5;
- (void)_handlePersistedAudioAsset:(id)arg1 isFinal:(bool)arg2 error:(id)arg3 options:(unsigned long long)arg4 resultHandler:(id /* block */)arg5;
- (id)init;
- (id)initWithPersistableRecipe:(id)arg1 configuration:(id)arg2;
- (unsigned long long)logContext;
- (id)requestSongResourceWithOptions:(unsigned long long)arg1 resultHandler:(id /* block */)arg2;
- (void)setLogContext:(unsigned long long)arg1;

@end
