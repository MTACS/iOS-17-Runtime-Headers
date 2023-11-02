
@interface ML3ProcessDownloadedAssetsOperation : ML3DatabaseOperation

- (long long)_artworkSourceFromTrackSource:(int)arg1;
- (bool)_execute:(id*)arg1;
- (bool)_processArtworkIdentifier:(id)arg1 artworkToken:(id)arg2 artworkType:(long long)arg3 mediaType:(unsigned int)arg4 sourceType:(long long)arg5;
- (bool)_processContainerAsset:(id)arg1 forSource:(int)arg2 withError:(id*)arg3;
- (bool)_processGeniusPlist:(id)arg1 geniusIDString:(id)arg2 geniusChecksum:(long long)arg3;
- (bool)_processTrackAsset:(id)arg1 forSource:(int)arg2 withError:(id*)arg3;
- (double)_videoSnapshotTimeForMediaType:(unsigned int)arg1;
- (id)initWithLibrary:(id)arg1 writer:(id)arg2;
- (unsigned long long)type;

@end
