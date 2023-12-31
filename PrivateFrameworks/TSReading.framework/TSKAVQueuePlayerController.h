
@interface TSKAVQueuePlayerController : TSKAVPlayerController {
    NSArray * mAssets;
}

- (void)dealloc;
- (id)initWithQueuePlayer:(id)arg1 delegate:(id)arg2 assets:(id)arg3;
- (id)initWithQueuePlayer:(id)arg1 delegate:(id)arg2 assets:(id)arg3 initialAssetIndex:(unsigned long long)arg4;
- (void)p_enqueueAssetsFromIndex:(unsigned long long)arg1;
- (void)playerItemDidPlayToEndTimeAtRate:(float)arg1;
- (void)skipToAssetAtIndex:(unsigned long long)arg1;

@end
