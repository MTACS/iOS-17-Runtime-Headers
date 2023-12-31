
@interface EKCurrentTimeMarkerView : UIView {
    UILabel * _currentTimeLabel;
    bool  _showsLine;
    bool  _showsThumb;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } currentTimeFrame;
@property (nonatomic, retain) UILabel *currentTimeLabel;
@property (nonatomic, readonly) double markerMidHeight;
@property (nonatomic, readonly) double markerWidth;
@property (nonatomic) bool showsLine;
@property (nonatomic) bool showsThumb;

+ (double)_spacingAdjustmentFontSize;
+ (id)timeMarkerFontForSizeClass:(long long)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_lineFrame;
- (void)_updateTimeLabelColor;
- (void)_updateTimeWithForce:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentTimeFrame;
- (id)currentTimeLabel;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 sizeClass:(long long)arg2;
- (void)invalidateFonts;
- (double)markerMidHeight;
- (double)markerWidth;
- (void)setCurrentTimeLabel:(id)arg1;
- (void)setShowsLine:(bool)arg1;
- (void)setShowsThumb:(bool)arg1;
- (bool)showsLine;
- (bool)showsThumb;
- (void)updateTime;

@end
