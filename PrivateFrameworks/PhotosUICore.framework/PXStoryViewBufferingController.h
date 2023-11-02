
@interface PXStoryViewBufferingController : PXStoryController <PXStoryDiagnosticHUDContentProvider> {
    PXStoryBufferingController * _bufferingController;
    bool  _didShowBufferingHUDAutomatically;
    bool  _isActive;
    PXStoryModel * _model;
    long long  _originalHUDType;
    bool  _originalIsHUDVisible;
    PXStoryViewModel * _viewModel;
    bool  _wantsBufferingHUDVisible;
}

@property (nonatomic, retain) PXStoryBufferingController *bufferingController;
@property (nonatomic) bool didShowBufferingHUDAutomatically;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) double lastCriticalBufferingDuration;
@property (nonatomic, readonly) double lastNoncriticalBufferingDuration;
@property (nonatomic, retain) PXStoryModel *model;
@property (nonatomic) long long originalHUDType;
@property (nonatomic) bool originalIsHUDVisible;
@property (nonatomic, readonly) double totalBufferingTimeInterval;
@property (nonatomic, readonly) NSDictionary *totalBufferingTimeIntervalsPerReason;
@property (nonatomic, readonly) PXStoryViewModel *viewModel;
@property (nonatomic) bool wantsBufferingHUDVisible;

- (void).cxx_destruct;
- (void)_invalidateBufferingController;
- (void)_invalidateBufferingControllerProperties;
- (void)_invalidateMainModel;
- (void)_invalidateViewModelProperties;
- (void)_invalidateWantsBufferingHUDVisible;
- (void)_updateBufferingController;
- (void)_updateBufferingControllerProperties;
- (void)_updateMainModel;
- (void)_updateViewModelProperties;
- (void)_updateWantsBufferingHUDVisible;
- (id)bufferingController;
- (void)configureUpdater:(id)arg1;
- (id)diagnosticErrorsByComponentForHUDType:(long long)arg1;
- (id)diagnosticTextForHUDType:(long long)arg1 displaySize:(struct CGSize { double x1; double x2; })arg2;
- (bool)didShowBufferingHUDAutomatically;
- (void)handleModelChange:(unsigned long long)arg1;
- (id)initWithObservableModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (bool)isActive;
- (double)lastCriticalBufferingDuration;
- (double)lastNoncriticalBufferingDuration;
- (id)model;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (long long)originalHUDType;
- (bool)originalIsHUDVisible;
- (void)setBufferingController:(id)arg1;
- (void)setDidShowBufferingHUDAutomatically:(bool)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setModel:(id)arg1;
- (void)setOriginalHUDType:(long long)arg1;
- (void)setOriginalIsHUDVisible:(bool)arg1;
- (void)setWantsBufferingHUDVisible:(bool)arg1;
- (double)totalBufferingTimeInterval;
- (id)totalBufferingTimeIntervalsPerReason;
- (id)viewModel;
- (bool)wantsBufferingHUDVisible;

@end
