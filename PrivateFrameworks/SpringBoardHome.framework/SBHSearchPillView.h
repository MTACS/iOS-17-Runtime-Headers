
@interface SBHSearchPillView : UIView <SBHSearchAffordance> {
    bool  _appliesSearchAffordanceCornerRadius;
    UIView * _backgroundView;
    id /* block */  _backgroundViewProvider;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _clientReferenceFrame;
    UIView * _contentContainerView;
    long long  _labelAlignment;
    _UILegibilitySettings * _legibilitySettings;
    double  _searchAffordanceCornerRadius;
    UIView * _searchAffordanceReferenceContainerView;
    UIView * _searchAffordanceReferenceView;
    UIImageView * _searchGlyphImageView;
    UILabel * _searchLabel;
}

@property (nonatomic) bool appliesSearchAffordanceCornerRadius;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, readonly, copy) id /* block */ backgroundViewProvider;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clientReferenceFrame;
@property (nonatomic, readonly) UIView *contentContainerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long labelAlignment;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) UIView *searchAffordanceBackgroundView;
@property (nonatomic) long long searchAffordanceContentAlignment;
@property (nonatomic, readonly) UIView *searchAffordanceContentView;
@property (nonatomic) double searchAffordanceCornerRadius;
@property (nonatomic) UIView *searchAffordanceReferenceContainerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } searchAffordanceReferenceFrame;
@property (nonatomic, retain) UIView *searchAffordanceReferenceView;
@property (nonatomic, readonly) UIImageView *searchGlyphImageView;
@property (nonatomic, readonly) UILabel *searchLabel;
@property (readonly) Class superclass;

+ (id)searchPillViewWithSystemDefaultBackground;

- (void).cxx_destruct;
- (id)_backdropGroupNameBase;
- (bool)appliesSearchAffordanceCornerRadius;
- (id)backgroundView;
- (id /* block */)backgroundViewProvider;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clientReferenceFrame;
- (id)contentContainerView;
- (double)halfFloatRoundForScale:(double)arg1 scale:(double)arg2;
- (id)init;
- (id)initWithBackgroundViewProvider:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)labelAlignment;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (id)makeSearchAffordanceBackgroundCapturingView;
- (id)searchAffordanceBackgroundView;
- (long long)searchAffordanceContentAlignment;
- (id)searchAffordanceContentView;
- (double)searchAffordanceCornerRadius;
- (id)searchAffordanceReferenceContainerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })searchAffordanceReferenceFrame;
- (id)searchAffordanceReferenceView;
- (id)searchGlyphImageView;
- (id)searchLabel;
- (void)setAppliesSearchAffordanceCornerRadius:(bool)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setClientReferenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLabelAlignment:(long long)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setSearchAffordanceContentAlignment:(long long)arg1;
- (void)setSearchAffordanceCornerRadius:(double)arg1;
- (void)setSearchAffordanceReferenceContainerView:(id)arg1;
- (void)setSearchAffordanceReferenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSearchAffordanceReferenceView:(id)arg1;

@end
