
@interface AVMomentCaptureMovieRequest : NSObject {
    AVWeakReferencingDelegateStorage * _delegateStorage;
    unsigned long long  _expectedMovieCount;
    unsigned int  _firedCallbackFlags;
    AVMomentCaptureSettings * _momentCaptureSettings;
    AVMomentCaptureMovie * _movie;
    AVMomentCaptureMovieRecordingResolvedSettings * _resolvedSettings;
    AVMomentCaptureMovie * _spatialOverCaptureMovie;
    AVMomentCaptureMovieRecordingSettings * _unresolvedSettings;
    AVMomentCaptureMovie * movie;
    AVMomentCaptureMovie * spatialOverCaptureMovie;
}

@property (readonly) AVWeakReferencingDelegateStorage *delegateStorage;
@property (nonatomic, readonly) unsigned long long expectedMovieCount;
@property (nonatomic) unsigned int firedCallbackFlags;
@property (readonly) AVMomentCaptureSettings *momentCaptureSettings;
@property (nonatomic, retain) AVMomentCaptureMovie *movie;
@property (nonatomic, retain) AVMomentCaptureMovieRecordingResolvedSettings *resolvedSettings;
@property (nonatomic, retain) AVMomentCaptureMovie *spatialOverCaptureMovie;
@property (readonly) AVMomentCaptureMovieRecordingSettings *unresolvedSettings;

+ (id)requestWithDelegate:(id)arg1 movieRecordingSettings:(id)arg2 momentSettings:(id)arg3;

- (id)_initWithDelegate:(id)arg1 movieRecordingSettings:(id)arg2 momentSettings:(id)arg3;
- (void)dealloc;
- (id)delegateStorage;
- (unsigned long long)expectedMovieCount;
- (unsigned int)firedCallbackFlags;
- (id)momentCaptureSettings;
- (id)movie;
- (id)resolvedSettings;
- (void)setFiredCallbackFlags:(unsigned int)arg1;
- (void)setMovie:(id)arg1;
- (void)setResolvedSettings:(id)arg1;
- (void)setSpatialOverCaptureMovie:(id)arg1;
- (id)spatialOverCaptureMovie;
- (id)unresolvedSettings;

@end
