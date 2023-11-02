
@interface _UISearchBarSearchFieldBackgroundView : _UITextFieldRoundedRectBackgroundViewNeue {
    bool  _backgroundContainer;
    long long  _barStyle;
    unsigned long long  _searchBarStyle;
    bool  _showingCursor;
    bool  _showingTouch;
}

@property (nonatomic) bool backgroundContainer;
@property (nonatomic) long long barStyle;
@property (nonatomic) unsigned long long searchBarStyle;
@property (nonatomic) bool showingCursor;
@property (nonatomic) bool showingTouch;

- (id)_automaticFillColorForActive:(bool)arg1;
- (id)_fillColor:(bool)arg1;
- (id)_strokeColor:(bool)arg1;
- (id)_ultralightFillColorForOverlayFilter:(bool)arg1 active:(bool)arg2;
- (bool)backgroundContainer;
- (long long)barStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 active:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 active:(bool)arg2 updateView:(bool)arg3;
- (void)layoutSubviews;
- (unsigned long long)searchBarStyle;
- (void)setBackgroundContainer:(bool)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setSearchBarStyle:(unsigned long long)arg1;
- (void)setShowingCursor:(bool)arg1;
- (void)setShowingTouch:(bool)arg1;
- (bool)showingCursor;
- (bool)showingTouch;

@end
