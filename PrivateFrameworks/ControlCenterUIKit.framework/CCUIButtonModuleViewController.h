
@interface CCUIButtonModuleViewController : UIViewController <CCUIContentModuleContentViewController> {
    CCUIButtonModuleView * _buttonModuleView;
    bool  _expanded;
}

@property (nonatomic, readonly) CCUIButtonModuleView *buttonView;
@property (nonatomic, readonly) UIViewPropertyAnimator *customAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic, retain) UIColor *glyphColor;
@property (nonatomic, retain) UIImage *glyphImage;
@property (nonatomic, retain) CCUICAPackageDescription *glyphPackageDescription;
@property (nonatomic) double glyphScale;
@property (nonatomic, copy) NSString *glyphState;
@property (nonatomic, readonly) bool hasGlyph;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth;
@property (nonatomic, readonly) double preferredExpandedContinuousCornerRadius;
@property (nonatomic, readonly) bool providesOwnPlatter;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, retain) UIColor *selectedGlyphColor;
@property (nonatomic, retain) UIImage *selectedGlyphImage;
@property (nonatomic, readonly) bool shouldPerformClickInteraction;
@property (nonatomic, readonly) bool shouldPerformHoverInteraction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buttonTapped:(id)arg1 forEvent:(id)arg2;
- (void)_buttonTouchDown:(id)arg1 forEvent:(id)arg2;
- (void)buttonTapped:(id)arg1 forEvent:(id)arg2;
- (void)buttonTouchDown:(id)arg1 forEvent:(id)arg2;
- (id)buttonView;
- (void)didTransitionToExpandedContentMode:(bool)arg1;
- (id)glyphColor;
- (id)glyphImage;
- (id)glyphPackageDescription;
- (double)glyphScale;
- (id)glyphState;
- (bool)hasGlyph;
- (bool)isExpanded;
- (bool)isSelected;
- (double)preferredExpandedContentHeight;
- (id)selectedGlyphColor;
- (id)selectedGlyphImage;
- (void)setExpanded:(bool)arg1;
- (void)setGlyphColor:(id)arg1;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphPackageDescription:(id)arg1;
- (void)setGlyphScale:(double)arg1;
- (void)setGlyphState:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedGlyphColor:(id)arg1;
- (void)setSelectedGlyphImage:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)willTransitionToExpandedContentMode:(bool)arg1;

@end
