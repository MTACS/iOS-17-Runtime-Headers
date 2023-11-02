
@interface PEEditSessionEventBuilder : NSObject {
    NSString * _adjustmentIdentifierAndVersion;
    <PEAsset> * _asset;
    double  _autoCalcDuration;
    PICompositionController * _compositionController;
    double  _editSessionDuration;
    double  _enterEditDuration;
    double  _exitEditDuration;
    bool  _firstSinceLaunch;
    NUComposition * _initialComposition;
    struct CGSize { 
        double width; 
        double height; 
    }  _quickCropSelectedAspectRatio;
    double  _resourceCheckingDuration;
    double  _resourceDownloadDuration;
    double  _resourceLoadingDuration;
    unsigned long long  _saveActionType;
    long long  _sessionEndReason;
    long long  _sessionEntryPoint;
}

@property (nonatomic, retain) NSString *adjustmentIdentifierAndVersion;
@property (nonatomic, retain) <PEAsset> *asset;
@property (nonatomic) double autoCalcDuration;
@property (nonatomic, copy) PICompositionController *compositionController;
@property (nonatomic) double editSessionDuration;
@property (nonatomic) double enterEditDuration;
@property (nonatomic) double exitEditDuration;
@property (getter=isFirstSinceLaunch, nonatomic) bool firstSinceLaunch;
@property (nonatomic, copy) NUComposition *initialComposition;
@property (nonatomic) struct CGSize { double x1; double x2; } quickCropSelectedAspectRatio;
@property (nonatomic) double resourceCheckingDuration;
@property (nonatomic) double resourceDownloadDuration;
@property (nonatomic) double resourceLoadingDuration;
@property (nonatomic) unsigned long long saveActionType;
@property (nonatomic) long long sessionEndReason;
@property (nonatomic) long long sessionEntryPoint;

// Image: /System/Library/PrivateFrameworks/PhotosUIEdit.framework/PhotosUIEdit

+ (id)allowedAdjustmentIdentifiers;

- (void).cxx_destruct;
- (id)adjustmentIdentifierAndVersion;
- (id)asset;
- (double)autoCalcDuration;
- (id)buildEvent;
- (id)compositionController;
- (double)editSessionDuration;
- (double)enterEditDuration;
- (double)exitEditDuration;
- (id)initialComposition;
- (bool)isFirstSinceLaunch;
- (struct CGSize { double x1; double x2; })quickCropSelectedAspectRatio;
- (double)resourceCheckingDuration;
- (double)resourceDownloadDuration;
- (double)resourceLoadingDuration;
- (unsigned long long)saveActionType;
- (long long)sessionEndReason;
- (long long)sessionEntryPoint;
- (void)setAdjustmentIdentifierAndVersion:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setAutoCalcDuration:(double)arg1;
- (void)setCompositionController:(id)arg1;
- (void)setEditSessionDuration:(double)arg1;
- (void)setEnterEditDuration:(double)arg1;
- (void)setExitEditDuration:(double)arg1;
- (void)setFirstSinceLaunch:(bool)arg1;
- (void)setInitialComposition:(id)arg1;
- (void)setQuickCropSelectedAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setResourceCheckingDuration:(double)arg1;
- (void)setResourceDownloadDuration:(double)arg1;
- (void)setResourceLoadingDuration:(double)arg1;
- (void)setSaveActionType:(unsigned long long)arg1;
- (void)setSessionEndReason:(long long)arg1;
- (void)setSessionEntryPoint:(long long)arg1;
- (bool)shouldReportAdjustmentIdentifierString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

- (id)initWithLegacyEnterEditEvent:(id)arg1 andExitEvent:(id)arg2;

@end
