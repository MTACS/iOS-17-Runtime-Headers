
@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {
    struct OpaqueFigMutableComposition { } * _figMutableComposition;
}

@property (getter=_mutableComposition, nonatomic, readonly) struct OpaqueFigMutableComposition { }*mutableComposition;

- (struct OpaqueFigSampleCursorService { }*)_getFigSampleCursorServiceReportingTimeAccuracy:(bool*)arg1;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (struct OpaqueFigMutableComposition { }*)_mutableComposition;
- (void)dealloc;
- (int)decodabilityValidationResult;
- (bool)isDecodable;
- (bool)isPlayable;
- (int)playabilityValidationResult;
- (id)segments;
- (id)segmentsAsPresented;

@end
