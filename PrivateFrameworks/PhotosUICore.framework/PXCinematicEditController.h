
@interface PXCinematicEditController : NSObject {
    PHAsset * _asset;
    PTCinematographyScript * _cinematographyScript;
    <PXCinematicEditControllerDelegate> * _delegate;
    PLVideoEditSource * _editSource;
    NSOrderedSet * _focusEventTimes;
    <PXFocusTimelineController> * _focusTimelineDelegate;
    double  _metadataAperture;
    NSDictionary * _savedManualFocusCinematographyState;
    <PTCinematographyScriptChanges> * _scriptChangesDelegate;
    NSArray * _uneditedUserDecisions;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic) bool cinematicAdjustmentActive;
@property (nonatomic) double cinematicAperture;
@property (nonatomic) long long cinematicDebugMode;
@property (nonatomic, retain) PTCinematographyScript *cinematographyScript;
@property (nonatomic) <PXCinematicEditControllerDelegate> *delegate;
@property (nonatomic, retain) PLVideoEditSource *editSource;
@property (nonatomic, retain) NSOrderedSet *focusEventTimes;
@property (nonatomic) <PXFocusTimelineController> *focusTimelineDelegate;
@property (nonatomic, readonly) double maximumCinematicAperture;
@property (nonatomic) double metadataAperture;
@property (nonatomic, readonly) double minimumCinematicAperture;
@property (nonatomic, readonly) double originalAperture;
@property (nonatomic, retain) NSDictionary *savedManualFocusCinematographyState;
@property (nonatomic) <PTCinematographyScriptChanges> *scriptChangesDelegate;
@property (nonatomic, retain) NSArray *uneditedUserDecisions;

- (void).cxx_destruct;
- (void)_dumpAllFrames;
- (void)_updatePortraitVideoAdjustmentFromCinematography;
- (id)asset;
- (id)axDescriptionForFocusDecisionAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)canToggleBackToUserFocusState;
- (bool)cinematicAdjustmentActive;
- (double)cinematicAperture;
- (long long)cinematicDebugMode;
- (id)cinematographyScript;
- (id)cinematographyState;
- (void)cinematographyWasEdited;
- (void)cinematographyWasEditedAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)compositionController;
- (id)delegate;
- (id)editSource;
- (id)focusEventTimes;
- (id)focusTimelineDelegate;
- (bool)isInAutoFocusState;
- (double)maximumCinematicAperture;
- (double)metadataAperture;
- (double)minimumCinematicAperture;
- (double)originalAperture;
- (void)removeFocusDecisionAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)resetToAsShotState;
- (void)resetToCinematographyState:(id)arg1;
- (id)savedManualFocusCinematographyState;
- (id)scriptChangesDelegate;
- (void)setAsset:(id)arg1;
- (void)setAsset:(id)arg1 editSource:(id)arg2;
- (void)setCinematicAdjustmentActive:(bool)arg1;
- (void)setCinematicAperture:(double)arg1;
- (void)setCinematicDebugMode:(long long)arg1;
- (void)setCinematographyScript:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditSource:(id)arg1;
- (void)setFocusEventTimes:(id)arg1;
- (void)setFocusTimelineDelegate:(id)arg1;
- (void)setMetadataAperture:(double)arg1;
- (void)setSavedManualFocusCinematographyState:(id)arg1;
- (void)setScriptChangesDelegate:(id)arg1;
- (void)setUneditedUserDecisions:(id)arg1;
- (void)toggleAutoFocusState;
- (id)uneditedUserDecisions;
- (void)updateFocusDecisions;
- (void)updateFocusDecisionsAnimatedAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
