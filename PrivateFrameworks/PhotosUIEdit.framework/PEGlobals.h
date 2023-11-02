
@interface PEGlobals : NSObject {
    bool  _affectManuallyEditedSlidersOnly;
    bool  _fetchAndSendScenePrintsForSliderNet;
    bool  _smartCopyPasteGateOnCaptureTime;
    bool  _smartCopyPasteReviewUIEnabled;
    double  _smartCopyPasteSimilarityGatingThreshold;
}

@property (nonatomic) bool affectManuallyEditedSlidersOnly;
@property (nonatomic) bool fetchAndSendScenePrintsForSliderNet;
@property (nonatomic) bool smartCopyPasteGateOnCaptureTime;
@property (nonatomic) bool smartCopyPasteReviewUIEnabled;
@property (nonatomic) double smartCopyPasteSimilarityGatingThreshold;

+ (id)sharedInstance;

- (bool)affectManuallyEditedSlidersOnly;
- (bool)fetchAndSendScenePrintsForSliderNet;
- (id)init;
- (void)setAffectManuallyEditedSlidersOnly:(bool)arg1;
- (void)setFetchAndSendScenePrintsForSliderNet:(bool)arg1;
- (void)setSmartCopyPasteGateOnCaptureTime:(bool)arg1;
- (void)setSmartCopyPasteReviewUIEnabled:(bool)arg1;
- (void)setSmartCopyPasteSimilarityGatingThreshold:(double)arg1;
- (bool)smartCopyPasteGateOnCaptureTime;
- (bool)smartCopyPasteReviewUIEnabled;
- (double)smartCopyPasteSimilarityGatingThreshold;

@end
