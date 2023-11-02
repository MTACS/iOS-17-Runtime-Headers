
@interface _UIDatePickerLinkedLabel : UIView <UIContentSizeCategoryAdjusting> {
    UILayoutGuide * _contentLayoutGuide;
    struct { 
        unsigned int needsStorageSync : 1; 
    }  _flags;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastSize;
    NSMapTable * _longestPossibleTitle;
    NSMapTable * _longestPossibleWidth;
    NSDictionary * _overrideAttributes;
    NSArray * _possibleTitles;
    NSLayoutConstraint * _renderLabelXConstraint;
    UILabel * _renderingLabel;
    _UIDatePickerLinkedLabelStorage * _storage;
    NSArray * _titles;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (nonatomic, readonly) UILayoutGuide *contentLayoutGuide;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic, retain) NSDictionary *overrideAttributes;
@property (nonatomic, retain) NSArray *possibleTitles;
@property (nonatomic, retain) _UIDatePickerLinkedLabelStorage *storage;
@property (readonly) Class superclass;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) bool textColorFollowsTintColor;
@property (nonatomic, retain) NSArray *titles;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_invalidatePossibleTitleCaches;
- (id)_longestPossibleTitleForPriority:(unsigned long long)arg1 width:(double*)arg2;
- (void)_preferredContentSizeCategoryDidChange;
- (long long)_renderPriorityForContainerWidth:(double)arg1 initialPriority:(long long)arg2;
- (void)_setNeedsStorageSync;
- (void)_storageSyncIfNecessaryWithContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_storageSyncWithContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateAlignmentConstraint;
- (bool)adjustsFontForContentSizeCategory;
- (bool)adjustsFontSizeToFitWidth;
- (id)contentLayoutGuide;
- (void)didMoveToWindow;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)minimumScaleFactor;
- (id)overrideAttributes;
- (id)possibleTitles;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;
- (void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setOverrideAttributes:(id)arg1;
- (void)setPossibleTitles:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextColorFollowsTintColor:(bool)arg1;
- (void)setTitles:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)storage;
- (long long)textAlignment;
- (id)textColor;
- (bool)textColorFollowsTintColor;
- (id)titles;

@end
