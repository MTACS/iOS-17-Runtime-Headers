
@interface ASVBadgeView : UIView {
    ASVBadgeDescription * _badgeDescription;
    UIImageView * _badgeImageView;
    UIVisualEffectView * _blurView;
    bool  _highlighted;
    UIView * _shadowView;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
}

@property (nonatomic, readonly) ASVBadgeDescription *badgeDescription;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) struct CGSize { double x1; double x2; } thumbnailSize;

+ (void)applyBlurWithBackground:(id)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
+ (id)badgeForThumbnail:(id)arg1;
+ (id)badgeView;
+ (id)highlightedBlurViewEffects;
+ (id)normalBlurViewEffects;

- (void).cxx_destruct;
- (void)_updateShadow;
- (id)badgeDescription;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isHighlighted;
- (void)setHighlighted:(bool)arg1;
- (void)setThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUpView;
- (struct CGSize { double x1; double x2; })thumbnailSize;

@end
