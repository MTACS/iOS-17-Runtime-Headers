
@interface PKCollapsibleHeaderView : UIView <UISearchBarDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    double  _additionalBottomPadding;
    double  _additionalTopPadding;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedTimeLabelFrame;
    LAUICheckmarkLayer * _checkmarkLayer;
    <PKCollapsibleHeaderViewDelegate> * _delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    double  _maxHeight;
    double  _minHeight;
    bool  _removeAdditionalTopPadding;
    UISearchBar * _searchBar;
    bool  _showCheckmark;
    bool  _showSearchBar;
    bool  _showSpinner;
    UILabel * _subtitleLabel;
    UIFont * _titleFont;
    UILabel * _titleLabel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _titleLabelLastLineBounds;
    double  _titleLabelLastLineDescent;
    bool  _titleShouldReserveSpaceForAccessories;
    UIView * _topArtView;
}

@property (nonatomic) double additionalBottomPadding;
@property (nonatomic) double additionalTopPadding;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKCollapsibleHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) double maxHeight;
@property (nonatomic, readonly) double minHeight;
@property (nonatomic) bool removeAdditionalTopPadding;
@property (nonatomic) bool showCheckmark;
@property (nonatomic) bool showSearchBar;
@property (nonatomic) bool showSpinner;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic) bool titleShouldReserveSpaceForAccessories;
@property (nonatomic, retain) UIView *topArtView;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessoryFrameForTitleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 accessorySize:(struct CGSize { double x1; double x2; })arg2;
- (void)_contentSizeCategoryDidChange;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_hide:(bool)arg1 view:(id)arg2 animated:(bool)arg3;
- (struct { double x1; double x2; double x3; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (double)_maxTitleWidthInsideFrameWidth:(double)arg1 reserveSpace:(bool)arg2;
- (void)_setLabelFonts;
- (double)_titleTopPadding;
- (double)_topArtTopPadding;
- (void)_updateCheckmarkColor;
- (double)additionalBottomPadding;
- (double)additionalTopPadding;
- (id)delegate;
- (struct { double x1; double x2; double x3; })heightBoundsForWidth:(double)arg1;
- (void)hideTitleView:(bool)arg1 animated:(bool)arg2;
- (void)hideView:(bool)arg1 animated:(bool)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)maxHeight;
- (double)minHeight;
- (bool)removeAdditionalTopPadding;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)setAdditionalBottomPadding:(double)arg1;
- (void)setAdditionalTopPadding:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setRemoveAdditionalTopPadding:(bool)arg1;
- (void)setSearchBarDefaultText:(id)arg1;
- (void)setShowCheckmark:(bool)arg1;
- (void)setShowSearchBar:(bool)arg1;
- (void)setShowSpinner:(bool)arg1;
- (void)setTitle:(id)arg1 subtitle:(id)arg2;
- (void)setTitleFont:(id)arg1;
- (void)setTitleShouldReserveSpaceForAccessories:(bool)arg1;
- (void)setTopArtView:(id)arg1;
- (bool)showCheckmark;
- (bool)showSearchBar;
- (bool)showSpinner;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleFont;
- (bool)titleShouldReserveSpaceForAccessories;
- (id)topArtView;

@end
