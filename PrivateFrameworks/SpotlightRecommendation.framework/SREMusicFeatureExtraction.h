
@interface SREMusicFeatureExtraction : NSObject

- (bool)_handleSongEvent:(id)arg1 context:(id)arg2 numMusic:(unsigned long long)arg3 outputSequence:(id)arg4;
- (id)init;
- (id)retrieveNowPlayingHistoryWithLength:(unsigned long long)arg1 error:(id*)arg2;

@end
