
@interface SBTodayIconListLayoutDelegate : NSObject <SBIconListLayoutDelegate> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _additionalLayoutInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _carouselInsets;
    bool  _carouselLayout;
    NSMutableDictionary * _catchupProperties;
    NSMutableDictionary * _catchupTimers;
    double  _collapseHeight;
    UIView * _containerView;
    double  _dismissProgress;
    double  _distanceToApex;
    SBIconListView * _iconListView;
    double  _revealProgress;
    double  _revealProgressMaxTranslation;
    bool  _revealed;
    UIScrollView * _scrollView;
    bool  _visuallyRevealed;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } additionalLayoutInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } carouselInsets;
@property (getter=isCarouselLayout, nonatomic) bool carouselLayout;
@property (nonatomic, retain) NSMutableDictionary *catchupProperties;
@property (nonatomic, retain) NSMutableDictionary *catchupTimers;
@property (nonatomic, readonly) double collapseHeight;
@property (nonatomic) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double dismissProgress;
@property (nonatomic, readonly) double distanceToApex;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIconListView *iconListView;
@property (nonatomic) double revealProgress;
@property (nonatomic, readonly) double revealProgressMaxTranslation;
@property (getter=isRevealed, nonatomic) bool revealed;
@property (nonatomic) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (getter=isVisuallyRevealed, nonatomic) bool visuallyRevealed;

- (void).cxx_destruct;
- (double)_iconListView:(id)arg1 originYForIconCoordinate:(struct SBIconCoordinate { long long x1; long long x2; })arg2 metrics:(id)arg3 adjustedForRevealProgress:(bool)arg4;
- (void)_layoutFocusGuideViewsInListView:(id)arg1;
- (void)_reorderSubviewsForCarouselLayoutInListView:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalLayoutInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })carouselInsets;
- (id)catchupProperties;
- (id)catchupTimers;
- (double)collapseHeight;
- (id)containerView;
- (double)dismissProgress;
- (double)distanceToApex;
- (id)iconListView;
- (struct CGPoint { double x1; double x2; })iconListView:(id)arg1 centerForIconCoordinate:(struct SBIconCoordinate { long long x1; long long x2; })arg2 metrics:(id)arg3 proposedCenter:(struct CGPoint { double x1; double x2; })arg4;
- (struct CGPoint { double x1; double x2; })iconListView:(id)arg1 originForIconCoordinate:(struct SBIconCoordinate { long long x1; long long x2; })arg2 metrics:(id)arg3 proposedOrigin:(struct CGPoint { double x1; double x2; })arg4;
- (unsigned long long)iconListView:(id)arg1 rowAtPoint:(struct CGPoint { double x1; double x2; })arg2 metrics:(id)arg3 proposedRow:(unsigned long long)arg4;
- (struct CGSize { double x1; double x2; })iconListView:(id)arg1 sizeThatFits:(struct CGSize { double x1; double x2; })arg2 metrics:(id)arg3 proposedSize:(struct CGSize { double x1; double x2; })arg4;
- (void)iconListView:(id)arg1 willLayoutIconView:(id)arg2;
- (void)iconListViewDidLayoutIcons:(id)arg1;
- (id)initWithIconListView:(id)arg1;
- (bool)isCarouselLayout;
- (bool)isRevealed;
- (bool)isVisuallyRevealed;
- (struct SBTodayIconListLayoutAttributes { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; })layoutAttributesForIconCoordinate:(struct SBIconCoordinate { long long x1; long long x2; })arg1 metrics:(id)arg2 adjustedForRevealProgress:(bool)arg3;
- (double)revealProgress;
- (double)revealProgressMaxTranslation;
- (id)scrollView;
- (void)setAdditionalLayoutInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCarouselInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCarouselLayout:(bool)arg1;
- (void)setCatchupProperties:(id)arg1;
- (void)setCatchupTimers:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setDismissProgress:(double)arg1;
- (void)setRevealProgress:(double)arg1;
- (void)setRevealed:(bool)arg1;
- (void)setScrollView:(id)arg1;
- (void)setVisuallyRevealed:(bool)arg1;
- (void)setVisuallyRevealed:(bool)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unadjustedBoundsForIconCoordinate:(struct SBIconCoordinate { long long x1; long long x2; })arg1;
- (double)unadjustedOriginYForIconCoordinate:(struct SBIconCoordinate { long long x1; long long x2; })arg1;

@end
