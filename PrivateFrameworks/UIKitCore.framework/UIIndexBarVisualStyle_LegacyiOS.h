
@interface UIIndexBarVisualStyle_LegacyiOS : UIIndexBarVisualStyle_Base {
    double  _bottomPadding;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedSizeToFit;
    UIFont * _font;
    UIColor * _nonTrackingBackgroundColor;
    bool  _pastBottom;
    bool  _pastTop;
    long long  _selectedSection;
    NSArray * _titles;
    double  _topPadding;
    double  _verticalTextHeightEstimate;
}

@property (nonatomic, copy) UIColor *nonTrackingBackgroundColor;

- (void).cxx_destruct;
- (long long)_accessibility_indexForEntryAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleBoundsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 stride:(double*)arg2;
- (bool)canBecomeFocused;
- (void)didDrawEntryAtIndex:(long long)arg1 indexBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 entryBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 context:(struct CGContext { }*)arg4 originalColor:(id)arg5;
- (void)displayEntriesUpdated;
- (id)displayEntryFromEntry:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)font;
- (void)indexColorUpdated;
- (double)indexWidth;
- (id)initWithView:(id)arg1;
- (double)minLineHeight;
- (id)nonTrackingBackgroundColor;
- (bool)overlay;
- (void)selectedSectionDidChange:(long long)arg1;
- (void)setNonTrackingBackgroundColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeUpdated;
- (void)trackingDidBegin;
- (void)trackingDidEnd;
- (bool)updateSectionForTouch:(id)arg1 withEvent:(id)arg2;
- (void)willDrawEntryAtIndex:(long long)arg1 indexBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 entryBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 context:(struct CGContext { }*)arg4 originalColor:(id)arg5;

@end
