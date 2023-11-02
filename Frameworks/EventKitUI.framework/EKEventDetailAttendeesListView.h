
@interface EKEventDetailAttendeesListView : UIView {
    double  _actualHeight;
    double  _bottomSpacingForSpinner;
    long long  _columnAItems;
    long long  _columnBItems;
    NSArray * _finalizedNames;
    long long  _firstColumnBType;
    bool  _groupsNames;
    bool  _highlighted;
    UIColor * _highlightedTextColor;
    NSMutableArray * _inviteeNames;
    double  _maxHeight;
    bool  _shouldEvenOutBlocks;
    bool  _showingSpinner;
    UIActivityIndicatorView * _spinnerView;
    long long  _statusCounts;
    UIColor * _textColor;
    NSArray * _ungrouped;
    UIViewController * _viewController;
}

@property (nonatomic) double bottomSpacingForSpinner;
@property (nonatomic, readonly) long long columnAItems;
@property (nonatomic, readonly) long long columnBItems;
@property (nonatomic) bool groupsNames;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) UIColor *highlightedTextColor;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) NSArray *ungrouped;
@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (double)_calculateHeightForItemCounts:(long long)arg1;
- (double)_calculateHeightForSpinnerDisplayMode;
- (void)_createSpinnerViewIfNeeded;
- (bool)_haveContentToDraw;
- (bool)_haveInviteesToDraw;
- (void)_layoutSpinner;
- (void)_setShowingSpinner:(bool)arg1;
- (bool)_shouldAlwaysDrawSingleColumn;
- (double)bottomSpacingForSpinner;
- (double)calculatedHeight;
- (long long)columnAItems;
- (long long)columnBItems;
- (void)contentSizeCategoryChanged;
- (void)dealloc;
- (void)drawNames:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)finalizeInviteNames;
- (id)generateAttributedStringsFromDisplayParticipants:(id)arg1 glyph:(id)arg2 displayCount:(long long)arg3;
- (bool)groupsNames;
- (id)highlightedTextColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (double)maxColumnHeight;
- (double)maxHeight;
- (void)recalculateHeight;
- (void)setBottomSpacingForSpinner:(double)arg1;
- (void)setGroupsNames:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setInvitees:(id)arg1 forStatus:(long long)arg2;
- (void)setTextColor:(id)arg1;
- (void)setUngrouped:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)setup;
- (void)showSpinner;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textColor;
- (id)ungrouped;
- (id)viewController;

@end
