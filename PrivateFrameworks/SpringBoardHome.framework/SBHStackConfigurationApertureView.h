
@interface SBHStackConfigurationApertureView : UIView {
    UIView * _backgroundFilterView;
    MTMaterialView * _backgroundMaterialView;
    UIView * _backgroundStackMatchingView;
    UIScrollView * _contentScrollView;
    struct SBIconImageInfo { 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        double scale; 
        double continuousCornerRadius; 
    }  _iconImageInfo;
    SBIconListView * _iconListView;
    bool  _usesConcentricCorners;
}

@property (nonatomic, readonly) NSSet *backgroundViews;
@property (nonatomic, retain) UIScrollView *contentScrollView;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; } iconImageInfo;
@property (nonatomic, retain) SBIconListView *iconListView;
@property (nonatomic) bool usesConcentricCorners;
@property (nonatomic, readonly) UIView *widgetStackMatchingBackgroundView;

- (void).cxx_destruct;
- (void)_updateBackgroundFilterView;
- (id)backgroundViews;
- (id)contentScrollView;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfo;
- (id)iconListView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 iconViewBackgroundType:(long long)arg2;
- (void)layoutSubviews;
- (void)setContentScrollView:(id)arg1;
- (void)setIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (void)setIconListView:(id)arg1;
- (void)setUsesConcentricCorners:(bool)arg1;
- (bool)usesConcentricCorners;
- (id)widgetStackMatchingBackgroundView;

@end
