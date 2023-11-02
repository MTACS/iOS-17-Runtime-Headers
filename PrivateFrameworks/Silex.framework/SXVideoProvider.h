
@interface SXVideoProvider : NSObject <SVVideoProviding> {
    NSURL * _URL;
    <SXAnalyticsReporting> * _analyticsReporter;
    NSString * _mediaIdentifier;
    <SVVideoMetadata> * _metadata;
    double  _pausedAtTime;
    unsigned long long  _playMethod;
    SVTimeline * _timeline;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, retain) <SXAnalyticsReporting> *analyticsReporter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double impressionThreshold;
@property (nonatomic, readonly) NSString *mediaIdentifier;
@property (nonatomic) <SVVideoMetadata> *metadata;
@property (nonatomic) double pausedAtTime;
@property (nonatomic) unsigned long long playMethod;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SVTimeline *timeline;

- (void).cxx_destruct;
- (id)URL;
- (id)analyticsReporter;
- (id)initWithURL:(id)arg1;
- (id /* block */)loadWithCompletionBlock:(id /* block */)arg1;
- (id)mediaIdentifier;
- (id)metadata;
- (void)muteStateChanged:(bool)arg1;
- (double)pausedAtTime;
- (unsigned long long)playMethod;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackInitiatedWithButtonTapped:(bool)arg1;
- (void)playbackPassedQuartile:(unsigned long long)arg1;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackStarted;
- (void)setAnalyticsReporter:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPausedAtTime:(double)arg1;
- (void)setPlayMethod:(unsigned long long)arg1;
- (id)timeline;

@end
