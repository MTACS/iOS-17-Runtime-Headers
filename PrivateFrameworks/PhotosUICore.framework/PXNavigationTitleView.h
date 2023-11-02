
@interface PXNavigationTitleView : UIView <PXPhotosDetailsBarsContentView> {
    NSArray * __constraints;
    UILabel * __subtitleLabel;
    bool  __subtitleVisible;
    UILabel * __titleLabel;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margins;
    struct { 
        bool texts; 
        bool fonts; 
        bool constraints; 
        bool size; 
    }  _needsUpdateFlags;
    NSString * _subtitle;
    UIFont * _subtitleFont;
    UIColor * _subtitleTextColor;
    double  _subviewsAlpha;
    long long  _textAlignment;
    NSString * _title;
    UIFont * _titleFont;
    UIColor * _titleTextColor;
    long long  _verticalSizeClass;
}

@property (setter=_setConstraints:, nonatomic, retain) NSArray *_constraints;
@property (nonatomic, readonly) UILabel *_subtitleLabel;
@property (getter=_isSubtitleVisible, setter=_setSubtitleVisible:, nonatomic) bool _subtitleVisible;
@property (nonatomic, readonly) UILabel *_titleLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=setMargins:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margins;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) UIFont *subtitleFont;
@property (nonatomic, retain) UIColor *subtitleTextColor;
@property (nonatomic) double subviewsAlpha;
@property (readonly) Class superclass;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, retain) UIColor *titleTextColor;
@property (nonatomic) long long verticalSizeClass;

- (void).cxx_destruct;
- (id)_constraints;
- (void)_invalidateConstraints;
- (void)_invalidateFonts;
- (void)_invalidateSize;
- (void)_invalidateTexts;
- (bool)_isSubtitleVisible;
- (bool)_needsUpdate;
- (void)_setConstraints:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setSubtitleVisible:(bool)arg1;
- (id)_subtitleLabel;
- (id)_titleLabel;
- (void)_updateConstraintsIfNeeded;
- (void)_updateFontsIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateSizeIfNeeded;
- (void)_updateTextsIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margins;
- (void)performChanges:(id /* block */)arg1;
- (void)setMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleFont:(id)arg1;
- (void)setSubtitleTextColor:(id)arg1;
- (void)setSubviewsAlpha:(double)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setVerticalSizeClass:(long long)arg1;
- (id)subtitle;
- (id)subtitleFont;
- (id)subtitleTextColor;
- (double)subviewsAlpha;
- (long long)textAlignment;
- (id)title;
- (id)titleFont;
- (id)titleTextColor;
- (void)updateConstraints;
- (long long)verticalSizeClass;

@end
