
@interface VKSelectableBarButtonItem : UIBarButtonItem {
    VKSelectableBarButtonContainerView * _toggleView;
}

@property (nonatomic) double alpha;
@property (nonatomic) double compactPadding;
@property (nonatomic) double cornerRadiusRatio;
@property (nonatomic) double padding;
@property (nonatomic) bool showsMenuAsPrimaryAction;
@property (nonatomic, retain) VKSelectableBarButtonContainerView *toggleView;
@property (nonatomic) double width;

+ (id)keyPathsForValuesAffectingAlpha;

- (void).cxx_destruct;
- (double)alpha;
- (double)compactPadding;
- (double)cornerRadiusRatio;
- (id)image;
- (id)init;
- (id)menu;
- (double)padding;
- (void)setAction:(SEL)arg1;
- (void)setAlpha:(double)arg1;
- (void)setCompactPadding:(double)arg1;
- (void)setCornerRadiusRatio:(double)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setMenu:(id)arg1;
- (void)setPadding:(double)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShowsMenuAsPrimaryAction:(bool)arg1;
- (void)setTarget:(id)arg1;
- (void)setToggleView:(id)arg1;
- (void)setWidth:(double)arg1;
- (bool)showsMenuAsPrimaryAction;
- (id)toggleView;
- (double)width;

@end
