
@interface _UICalendarDateViewCell : UICollectionViewCell <UIPointerInteractionDelegate> {
    UIView * _backgroundView;
    UICalendarView * _calendarView;
    UILabel * _dayLabel;
    UIView * _decorationContentView;
    NSArray * _decorations;
    struct { 
        unsigned int overhangMonth : 1; 
        unsigned int outOfRange : 1; 
        unsigned int isToday : 1; 
        unsigned int highlightsToday : 1; 
        unsigned int wantsRoundedSquare : 1; 
    }  _flags;
    NSString * _fontDesign;
    UIView * _labelContentView;
    UIPointerInteraction * _pointerInteraction;
}

@property (nonatomic) UICalendarView *calendarView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)_currentCellState;
- (void)_updateBackgroundView;
- (void)_updateFontDesign;
- (void)_updateForPreferredContentSizeCategoryChange;
- (void)_updateLabelColor;
- (id)calendarView;
- (void)configureWithDay:(id)arg1 formatter:(id)arg2 fontDesign:(id)arg3 decorations:(id)arg4 outOfRange:(bool)arg5 renderOverhangDays:(bool)arg6 highlightsToday:(bool)arg7;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setCalendarView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)tintColorDidChange;

@end
