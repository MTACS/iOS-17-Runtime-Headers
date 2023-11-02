
@interface NTKDualTimeDigitalTicksView : UIView {
    UIColor * _activeTickColor;
    NSCalendar * _calendar;
    CLKClockTimerToken * _clockTimerToken;
    struct { 
        struct CGSize { 
            double width; 
            double height; 
        } tickSize; 
        struct CGSize { 
            double width; 
            double height; 
        } cardinalTickSize; 
        double tickInset; 
        double cardinalTickInset; 
    }  _configuration;
    <NTKDualTimeDigitalTicksViewPaletteDelegate> * _delegate;
    NSArray * _digitalTicks;
    bool  _editing;
    bool  _frozen;
    bool  _hideActiveTicks;
    UIColor * _inactiveTickColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastSize;
    NSDate * _overrideDate;
    CLKClockTimer * _timer;
}

@property (nonatomic, retain) UIColor *activeTickColor;
@property (nonatomic) <NTKDualTimeDigitalTicksViewPaletteDelegate> *delegate;
@property (nonatomic) bool editing;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (nonatomic) bool hideActiveTicks;
@property (nonatomic, retain) UIColor *inactiveTickColor;
@property (nonatomic, retain) NSDate *overrideDate;

+ (struct CGSize { double x1; double x2; })_sizeFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (void)_colorizeDigitalTicksWithActiveColor:(id)arg1 inactiveColor:(id)arg2 now:(id)arg3 secondFraction:(double)arg4;
- (void)_configureTicks;
- (void)_refreshDigitalTicksWithNow:(id)arg1 secondFraction:(double)arg2;
- (id)activeTickColor;
- (id)delegate;
- (bool)editing;
- (bool)hideActiveTicks;
- (id)inactiveTickColor;
- (id)initWithConfiguration:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })arg1 timer:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })arg2 timer:(id)arg3;
- (bool)isFrozen;
- (void)layoutSubviews;
- (id)overrideDate;
- (void)refreshTicks;
- (void)setActiveTickColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setHideActiveTicks:(bool)arg1;
- (void)setInactiveTickColor:(id)arg1;
- (void)setOverrideDate:(id)arg1;
- (void)startAnimation;
- (void)stopAnimation;

@end
