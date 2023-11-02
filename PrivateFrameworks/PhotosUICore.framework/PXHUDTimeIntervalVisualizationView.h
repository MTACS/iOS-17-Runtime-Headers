
@interface PXHUDTimeIntervalVisualizationView : PXHUDAbstractVisualizationView {
    NSTimer * _timer;
    UILabel * _titleAndTimeLabel;
}

@property (nonatomic, retain) PXHUDTimeIntervalVisualization *visualization;

- (void).cxx_destruct;
- (void)_cleanupTimer;
- (void)_setupTimer;
- (void)_timerTick;
- (void)_updateTimer;
- (void)_updateTitleAndTimeLabel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)visualizationDidUpdate;

@end
