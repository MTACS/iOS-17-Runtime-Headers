
@interface BWIrisMovieGenerator : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _actualMovieStartTime;
    struct OpaqueCMByteStream { } * _byteStream;
    BWIrisStillImageMovieMetadataCache * _irisStillImageMovieMetadataCache;
    BWLimitedGMErrorLogger * _limitedGMErrorLogger;
    long long  _masterMovieAudioExtractionID;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _masterMovieDuration;
    bool  _masterMovieParsingComplete;
    struct OpaqueFigFormatReader { } * _masterMovieReader;
    NSObject<OS_dispatch_queue> * _movieGenerationQueue;
    NSMutableArray * _movieInfoAndCallbacks;
    struct OpaqueFigSimpleMutex { } * _movieInfoAndCallbacksMutex;
    int  _numberOfPendingReferenceMovies;
    bool  _sampleReferenceMoviesEnabled;
    bool  _sourceIsExternalCamera;
    bool  _sourceIsFrontFacingCamera;
    int  _streamForcedOffErrorCode;
    bool  _suspended;
    BWVideoOrientationTimeMachine * _videoOrientationTimeMachine;
    bool  _vitalInputStreamHasBeenForcedOff;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } actualMovieStartTime;
@property (readonly) int numberOfPendingReferenceMovies;
@property int streamForcedOffErrorCode;
@property bool suspended;
@property bool vitalInputStreamHasBeenForcedOff;

+ (void)initialize;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })actualMovieStartTime;
- (void)dealloc;
- (bool)flush;
- (bool)flushAsync;
- (id)initWithReadableByteStream:(struct OpaqueCMByteStream { }*)arg1 forFrontFacingCamera:(bool)arg2 forExternalCamera:(bool)arg3 sampleReferenceMoviesEnabled:(bool)arg4 movieGenerationQueue:(id)arg5 irisStillImageMovieMetadataCache:(id)arg6 videoOrientationTimeMachine:(id)arg7;
- (int)numberOfPendingReferenceMovies;
- (void)parseAdditionalFragments;
- (void)setActualMovieStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setStreamForcedOffErrorCode:(int)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setVitalInputStreamHasBeenForcedOff:(bool)arg1;
- (int)streamForcedOffErrorCode;
- (bool)suspended;
- (void)updateOverCaptureQualityScoresForMoviesEndingBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 fromMetadataRingBuffer:(id)arg2;
- (bool)vitalInputStreamHasBeenForcedOff;
- (void)writeMovieWithInfo:(id)arg1 completionHandler:(id /* block */)arg2;

@end
