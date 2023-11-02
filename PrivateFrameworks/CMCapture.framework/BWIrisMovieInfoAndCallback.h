
@interface BWIrisMovieInfoAndCallback : NSObject {
    id /* block */  _callback;
    BWIrisMovieInfo * _info;
    double  _overCaptureQualityScore;
    unsigned int  _overCaptureQualityScoringVersion;
    bool  _processed;
}

@property (nonatomic, readonly) id /* block */ callback;
@property (nonatomic, readonly) BWIrisMovieInfo *info;
@property (nonatomic) double overCaptureQualityScore;
@property (nonatomic) unsigned int overCaptureQualityScoringVersion;
@property (nonatomic) bool processed;

+ (id)movieInfoAndCallbackWithMovieInfo:(id)arg1 callback:(id /* block */)arg2;

- (id /* block */)callback;
- (void)dealloc;
- (id)info;
- (double)overCaptureQualityScore;
- (unsigned int)overCaptureQualityScoringVersion;
- (bool)processed;
- (void)setOverCaptureQualityScore:(double)arg1;
- (void)setOverCaptureQualityScoringVersion:(unsigned int)arg1;
- (void)setProcessed:(bool)arg1;

@end
