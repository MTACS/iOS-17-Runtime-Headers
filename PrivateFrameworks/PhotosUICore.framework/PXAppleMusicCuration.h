
@interface PXAppleMusicCuration : NSObject {
    <PXAudioAssetFetchResult> * _bestMusicSuggestions;
    PXAppleMusicCurationInfo * _musicCurationInfo;
    <PXAudioAssetFetchResult> * _musicForLocation;
    <PXAudioAssetFetchResult> * _musicForPerformer;
    <PXAudioAssetFetchResult> * _musicForTime;
    <PXAudioAssetFetchResult> * _musicForYou;
}

@property (nonatomic, readonly) <PXAudioAssetFetchResult> *bestMusicSuggestions;
@property (nonatomic, readonly) PXAppleMusicCurationInfo *musicCurationInfo;
@property (nonatomic, readonly) <PXAudioAssetFetchResult> *musicForLocation;
@property (nonatomic, readonly) <PXAudioAssetFetchResult> *musicForPerformer;
@property (nonatomic, readonly) <PXAudioAssetFetchResult> *musicForTime;
@property (nonatomic, readonly) <PXAudioAssetFetchResult> *musicForYou;

- (void).cxx_destruct;
- (id)bestMusicSuggestions;
- (id)init;
- (id)initWithBestMusicSuggestions:(id)arg1 musicForYou:(id)arg2 musicForLocation:(id)arg3 musicForTime:(id)arg4 musicForPerformer:(id)arg5 musicCurationInfo:(id)arg6;
- (id)musicCurationInfo;
- (id)musicForLocation;
- (id)musicForPerformer;
- (id)musicForTime;
- (id)musicForYou;

@end
