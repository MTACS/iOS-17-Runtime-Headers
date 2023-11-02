
@interface NTKDigitalFaceView : NTKFaceView {
    long long  _viewMode;
}

@property (nonatomic, readonly) NTKDigitalTimeLabel *timeView;
@property (nonatomic) long long viewMode;

- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_createTimeViewIfNecessary;
- (id)_digitalTimeLabelStyleFromViewMode:(long long)arg1 faceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_loadSnapshotContentViews;
- (unsigned long long)_timeLabelOptions;
- (bool)_timeLabelUsesLegibility;
- (void)_unloadSnapshotContentViews;
- (void)invalidateDigitalTimeLabelStyle;
- (void)layoutSubviews;
- (void)setViewMode:(long long)arg1;
- (void)setViewMode:(long long)arg1 updateTimeViewStyle:(bool)arg2;
- (long long)viewMode;

@end
