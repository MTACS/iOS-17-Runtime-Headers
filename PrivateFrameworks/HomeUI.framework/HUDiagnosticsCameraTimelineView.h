
@interface HUDiagnosticsCameraTimelineView : UIView {
    UILabel * _cameraStatusLabel;
    UILabel * _currentEventLabel;
    UILabel * _currentPositionLabel;
    UILabel * _currentTimelineStateLabel;
    UIButton * _moreButton;
}

@property (nonatomic, retain) UILabel *cameraStatusLabel;
@property (nonatomic, retain) UILabel *currentEventLabel;
@property (nonatomic, retain) UILabel *currentPositionLabel;
@property (nonatomic, retain) UILabel *currentTimelineStateLabel;
@property (nonatomic, retain) UIButton *moreButton;

- (void).cxx_destruct;
- (id)cameraStatusLabel;
- (id)currentEventLabel;
- (id)currentPositionLabel;
- (id)currentTimelineStateLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)moreButton;
- (void)setCameraStatusLabel:(id)arg1;
- (void)setCurrentEventLabel:(id)arg1;
- (void)setCurrentPositionLabel:(id)arg1;
- (void)setCurrentTimelineStateLabel:(id)arg1;
- (void)setMoreButton:(id)arg1;
- (void)updateWithPlaybackEngine:(id)arg1;

@end
