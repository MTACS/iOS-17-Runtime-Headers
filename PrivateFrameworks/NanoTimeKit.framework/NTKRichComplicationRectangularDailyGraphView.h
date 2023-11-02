
@interface NTKRichComplicationRectangularDailyGraphView : NTKRichComplicationRectangularBaseView {
    UIColor * _accentColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedBounds;
    UILabel * _dailyHighLabel;
    UILabel * _dailyLowLabel;
    UIColor * _graphLabelAndGridColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _graphRect;
    double  _noDataAlpha;
    UIColor * _noDataTextColor;
    UIColor * _nonAccentColor;
    double  _timeLabelAndGridAlpha;
    NSArray * _timeMarkerLabels;
    CLKUIColoringLabel * _titleLabel;
}

@property (nonatomic, retain) UIColor *accentColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cachedBounds;
@property (nonatomic, readonly) UILabel *dailyHighLabel;
@property (nonatomic, readonly) UILabel *dailyLowLabel;
@property (nonatomic, readonly) UIColor *graphLabelAndGridColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } graphRect;
@property (nonatomic, readonly) UIColor *noDataTextColor;
@property (nonatomic, retain) UIColor *nonAccentColor;
@property (nonatomic, readonly) NSArray *timeMarkerLabels;
@property (nonatomic, readonly) double timeMarkerPadding;
@property (nonatomic, readonly) CLKUIColoringLabel *titleLabel;

+ (id)dailyFormattedNoData;
+ (struct CGSize { double x1; double x2; })graphSize;

- (void).cxx_destruct;
- (void)_addConstraints;
- (void)_addSubviews;
- (void)_applyPausedUpdate;
- (double)_calculateGraphXBasedOnRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 constants:(struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })arg2;
- (id)_datesForGraphInTimezone:(id)arg1;
- (void)_drawVerticalHourLines:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 bottomLabelPadding:(double)arg3;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (double)_lineStrokeWidthGivenRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateTimeMarkerLabelsForDates:(id)arg1 timezone:(id)arg2;
- (id)accentColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cachedBounds;
- (id)dailyHighLabel;
- (id)dailyLowLabel;
- (void)drawGraph:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawableGraphRect;
- (id)graphLabelAndGridColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })graphRect;
- (id)init;
- (void)loadWithMetadata:(id)arg1;
- (id)noDataTextColor;
- (id)nonAccentColor;
- (void)resetToNoDataState:(id)arg1;
- (void)setAccentColor:(id)arg1;
- (void)setCachedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGraphRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNonAccentColor:(id)arg1;
- (id)timeMarkerLabels;
- (double)timeMarkerPadding;
- (id)titleLabel;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
