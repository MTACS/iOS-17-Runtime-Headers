
@interface JFXDepthDataMediaReader : NSObject <JFXMediaVideoTrackReader> {
    JFXMediaReaderDepthData * _cachedDepthData;
    JFXDepthDecompressor * _depthDecompressor;
    NSError * _lastDecodeError;
    <JFXMediaVideoTrackReader> * _reader;
    NSObject<OS_dispatch_queue> * _synchronizationQueue;
}

@property (nonatomic, retain) JFXMediaReaderDepthData *cachedDepthData;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) JFXDepthDecompressor *depthDecompressor;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isScrubbing;
@property (nonatomic, retain) NSError *lastDecodeError;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } readableTimeRange;
@property (nonatomic, readonly) <JFXMediaVideoTrackReader> *reader;
@property (nonatomic, readonly) unsigned long long signPostID;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *synchronizationQueue;

- (void).cxx_destruct;
- (id)JFX_cachedDepthDataForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)JFX_decompressAVDepthDataFromVideoTrackReaderSample:(id)arg1;
- (id)JFX_readDepthDataForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)beginReading;
- (bool)beginReadingAtTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)cachedDepthData;
- (id)depthDataForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)depthDecompressor;
- (id)error;
- (id)initWithVideoTrackReader:(id)arg1;
- (bool)isScrubbing;
- (id)lastDecodeError;
- (id)name;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })readableTimeRange;
- (id)reader;
- (void)setCachedDepthData:(id)arg1;
- (void)setDepthDecompressor:(id)arg1;
- (void)setIsScrubbing:(bool)arg1;
- (void)setLastDecodeError:(id)arg1;
- (unsigned long long)signPostID;
- (long long)status;
- (id)synchronizationQueue;
- (id)videoSampleForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
