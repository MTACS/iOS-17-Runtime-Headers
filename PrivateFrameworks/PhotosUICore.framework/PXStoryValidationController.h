
@interface PXStoryValidationController : PXStoryController <PXStoryDiagnosticHUDContentProvider> {
    <PXStoryErrorReporter> * _errorReporter;
    bool  _isActive;
    PXStoryModel * _model;
    <PXStoryTimeline> * _timelineToValidate;
    long long  _timelineValidationCount;
    NSError * _timelineValidationError;
    NSProgress * _timelineValidationProgress;
    PXStoryViewModel * _viewModel;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) <PXStoryErrorReporter> *errorReporter;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, retain) PXStoryModel *model;
@property (nonatomic, retain) <PXStoryTimeline> *timelineToValidate;
@property (nonatomic) long long timelineValidationCount;
@property (nonatomic, retain) NSError *timelineValidationError;
@property (nonatomic, retain) NSProgress *timelineValidationProgress;
@property (nonatomic, readonly) PXStoryViewModel *viewModel;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)_validateTimeline:(id)arg1 progress:(id)arg2;

- (void).cxx_destruct;
- (void)_handleTimelineValidationError:(id)arg1 progress:(id)arg2;
- (void)_invalidateModel;
- (void)_invalidateTimelineToValidate;
- (void)_invalidateTimelineValidation;
- (void)_updateModel;
- (void)_updateTimelineToValidate;
- (void)_updateTimelineValidation;
- (void)configureUpdater:(id)arg1;
- (void)dealloc;
- (id)diagnosticErrorsByComponentForHUDType:(long long)arg1;
- (id)diagnosticTextForHUDType:(long long)arg1 displaySize:(struct CGSize { double x1; double x2; })arg2;
- (id)errorReporter;
- (void)handleModelChange:(unsigned long long)arg1;
- (id)initWithObservableModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (bool)isActive;
- (id)model;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setIsActive:(bool)arg1;
- (void)setModel:(id)arg1;
- (void)setTimelineToValidate:(id)arg1;
- (void)setTimelineValidationCount:(long long)arg1;
- (void)setTimelineValidationError:(id)arg1;
- (void)setTimelineValidationProgress:(id)arg1;
- (id)timelineToValidate;
- (long long)timelineValidationCount;
- (id)timelineValidationError;
- (id)timelineValidationProgress;
- (id)viewModel;
- (id)workQueue;

@end
