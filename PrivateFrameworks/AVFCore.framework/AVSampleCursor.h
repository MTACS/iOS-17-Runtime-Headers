
@interface AVSampleCursor : NSObject <NSCopying> {
    AVSampleCursorInternal * _sampleCursor;
}

+ (void)initialize;
+ (id)sampleCursorWithFigSampleCursor:(struct OpaqueFigSampleCursor { }*)arg1;

- (struct OpaqueFigSampleCursor { }*)_figSampleCursor;
- (bool)canProvideSampleBuffers;
- (long long)comparePositionInDecodeOrderWithPositionOfCursor:(id)arg1;
- (struct opaqueCMFormatDescription { }*)copyCurrentSampleFormatDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct opaqueCMSampleBuffer { }*)createSampleBufferForCurrentSampleReturningError:(id*)arg1;
- (struct opaqueCMSampleBuffer { }*)createSampleBufferFromCurrentSampleToEndCursor:(id)arg1 error:(id*)arg2;
- (struct { long long x1; bool x2; bool x3; bool x4; })currentChunkInfo;
- (struct { long long x1; long long x2; })currentChunkStorageRange;
- (id)currentChunkStorageURL;
- (struct { bool x1; long long x2; })currentSampleAudioDependencyInfo;
- (id)currentSampleDependencyAttachments;
- (struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; })currentSampleDependencyInfo;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentSampleDuration;
- (long long)currentSampleIndexInChunk;
- (struct { long long x1; long long x2; })currentSampleStorageRange;
- (struct { bool x1; bool x2; bool x3; })currentSampleSyncInfo;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })decodeTimeStamp;
- (id)description;
- (id)init;
- (id)initWithFigSampleCursor:(struct OpaqueFigSampleCursor { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTimeStamp;
- (long long)samplesRequiredForDecoderRefresh;
- (bool)samplesWithEarlierDecodeTimeStampsMayHaveLaterPresentationTimeStampsThanCursor:(id)arg1;
- (bool)samplesWithLaterDecodeTimeStampsMayHaveEarlierPresentationTimeStampsThanCursor:(id)arg1;
- (id)seamIdentifier;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stepByDecodeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stepByDecodeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 wasPinned:(bool*)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stepByPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stepByPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 wasPinned:(bool*)arg2;
- (long long)stepInDecodeOrderByCount:(long long)arg1;
- (long long)stepInPresentationOrderByCount:(long long)arg1;

@end
