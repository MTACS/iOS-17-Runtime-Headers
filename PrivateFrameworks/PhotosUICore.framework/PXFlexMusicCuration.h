
@interface PXFlexMusicCuration : NSObject {
    <PXAudioAssetFetchResult> * _bestSongSuggestions;
    <PXAudioAssetFetchResult> * _secondarySongSuggestions;
}

@property (nonatomic, readonly) <PXAudioAssetFetchResult> *bestSongSuggestions;
@property (nonatomic, readonly) <PXAudioAssetFetchResult> *secondarySongSuggestions;

- (void).cxx_destruct;
- (id)bestSongSuggestions;
- (id)init;
- (id)initWithBestSongSuggestions:(id)arg1 secondarySongSuggestions:(id)arg2;
- (id)secondarySongSuggestions;

@end
