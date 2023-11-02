
@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper {
    short  _alternateGroupID;
}

- (bool)_canAddInput:(id)arg1 exceptionReason:(id*)arg2;
- (bool)_canAddInputGroup:(id)arg1 exceptionReason:(id*)arg2;
- (bool)_isDefunct;
- (void)addInput:(id)arg1;
- (void)addInputGroup:(id)arg1;
- (bool)canAddInput:(id)arg1;
- (bool)canAddInputGroup:(id)arg1;
- (void)cancelWriting;
- (id)initWithConfigurationState:(id)arg1;
- (id)initWithURL:(id)arg1 fileType:(id)arg2;
- (void)setDefaultPropertyValuesToConfigurationState:(id)arg1 outputURL:(id)arg2 fileType:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDirectoryForTemporaryFiles:(id)arg1;
- (void)setInitialMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setInitialMovieFragmentSequenceNumber:(long long)arg1;
- (void)setInitialSegmentStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMetadata:(id)arg1;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieTimeScale:(int)arg1;
- (void)setOutputFileTypeProfile:(id)arg1;
- (void)setOverallDurationHint:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredOutputSegmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredRate:(float)arg1;
- (void)setPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setProducesCombinableFragments:(bool)arg1;
- (void)setRequiresInProcessOperation:(bool)arg1;
- (void)setShouldOptimizeForNetworkUse:(bool)arg1;
- (void)setSinglePassFileSize:(long long)arg1;
- (void)setSinglePassMediaDataSize:(long long)arg1;
- (void)setUsesVirtualCaptureCard:(bool)arg1;
- (void)startWriting;
- (long long)status;

@end
