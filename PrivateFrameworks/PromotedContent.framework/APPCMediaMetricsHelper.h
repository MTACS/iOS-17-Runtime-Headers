
@interface APPCMediaMetricsHelper : NSObject <APPCMediaMetricsHelping, APPCMetricRegister> {
    void $__lazy_storage_$_initialVolumeSender;
    void _visiblePercentage;
    void adHasImpressed;
    void adType;
    void containerType;
    void contextIdentifier;
    void eventCountTracker;
    void impressionThreshold;
    void mediaHasStarted;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  mediaStartedTimestamp;
    void notificationOwner;
    void orderVendor;
    void primitiveCreator;
    void promotedContent;
    void promotedContentIdentifier;
    void videoDuration;
    void videoQuality;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  videoURL;
    void visiblePercentageChanged;
}

@property (nonatomic) long long visiblePercentage;
@property (nonatomic, copy) id /* block */ visiblePercentageChanged;

// Image: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent

- (void).cxx_destruct;
- (id)init;
- (void)mediaComplete;
- (void)mediaContractedAtPosition:(double)arg1 fullScreen:(bool)arg2;
- (void)mediaExpandedAtPosition:(double)arg1 fullScreen:(bool)arg2;
- (void)mediaFinished;
- (void)mediaLoaded;
- (void)mediaPausedAtPosition:(double)arg1;
- (void)mediaPlayedAtPosition:(double)arg1;
- (void)mediaProgress:(long long)arg1;
- (void)mediaShowControlsAtPosition:(double)arg1;
- (void)mediaSkippedAtPosition:(double)arg1;
- (void)mediaStarted;
- (void)mediaUserExitedArticle;
- (void)mediaVolumeChangedAtPosition:(double)arg1 volume:(float)arg2;
- (void)registerHandlerForAllMetricsWithClosure:(id /* block */)arg1;
- (void)removeHandler;
- (void)setVisiblePercentage:(long long)arg1;
- (void)setVisiblePercentageChanged:(id /* block */)arg1;
- (void)videoChosen;
- (void)videoChosenWithVideoWidth:(float)arg1 videoHeight:(float)arg2;
- (long long)visiblePercentage;
- (id /* block */)visiblePercentageChanged;

// Image: /System/Library/PrivateFrameworks/PromotedContentUI.framework/PromotedContentUI

- (void)recordPrerollImpression;

@end
