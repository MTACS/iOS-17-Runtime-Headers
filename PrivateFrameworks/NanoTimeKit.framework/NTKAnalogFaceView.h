
@interface NTKAnalogFaceView : NTKFaceView {
    bool  __contentViewsOpaque;
    bool  __timeViewBehindContentView;
    UIView * _dialComplicationContainerView;
    UIView * _timeViewContainer;
}

@property (getter=_contentViewsAreOpaque, setter=_setContentViewsOpaque:, nonatomic) bool _contentViewsOpaque;
@property (setter=_setTimeViewBehindContentView:, nonatomic) bool _timeViewBehindContentView;
@property (nonatomic, readonly) UIView *dialComplicationContainerView;
@property (nonatomic, retain) NTKAnalogHandsView *timeView;
@property (nonatomic, retain) UIView *timeViewContainer;

+ (Class)_timeViewClass;

- (void).cxx_destruct;
- (void)_applyDataMode;
- (void)_applyShowContentForUnadornedSnapshot;
- (long long)_backgroundedTimeViewEditModes;
- (bool)_canStartTimeScrubbing;
- (void)_cleanupAfterEditing;
- (id)_complicationContainerViewForSlot:(id)arg1;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureTimeView:(id)arg1;
- (struct CGPoint { double x1; double x2; })_contentCenterOffset;
- (bool)_contentViewsAreOpaque;
- (void)_createTimeViewIfNecessary;
- (void)_endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_handleLocaleDidChange;
- (bool)_isAnalog;
- (bool)_isComplicationSlotInsideDial:(id)arg1;
- (void)_loadContentToReplaceUnadornedSnapshot;
- (void)_loadSnapshotContentViews;
- (bool)_needsForegroundContainerView;
- (void)_prepareForEditing;
- (void)_scrubToDate:(id)arg1 animated:(bool)arg2;
- (void)_setContentViewsOpaque:(bool)arg1;
- (void)_setTimeViewBehindContentView:(bool)arg1;
- (bool)_shouldRasterizeForegroundContainerViewForEditMode:(long long)arg1;
- (void)_startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)_timeViewBehindContentForEditMode:(long long)arg1;
- (bool)_timeViewBehindContentView;
- (double)_timeViewScale;
- (void)_unloadSnapshotContentViews;
- (void)_updateDateComplicationPositionIfNecessary;
- (void)dealloc;
- (id)dialComplicationContainerView;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)layoutSubviews;
- (void)setTimeViewContainer:(id)arg1;
- (id)timeViewContainer;

@end
