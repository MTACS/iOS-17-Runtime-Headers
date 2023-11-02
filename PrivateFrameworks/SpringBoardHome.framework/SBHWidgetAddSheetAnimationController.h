
@interface SBHWidgetAddSheetAnimationController : _UISheetAnimationController {
    struct CGPoint { 
        double x; 
        double y; 
    }  _fromPoint;
    UIView * _matchMoveView;
    SBHPortaledShadowedWidgetView * _portaledShadowedWidgetView;
    SBHAddWidgetSheetGalleryCollectionViewCell * _sourceCell;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } fromPoint;
@property (nonatomic, retain) UIView *matchMoveView;
@property (nonatomic, retain) SBHPortaledShadowedWidgetView *portaledShadowedWidgetView;
@property (nonatomic, retain) SBHAddWidgetSheetGalleryCollectionViewCell *sourceCell;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (struct CGPoint { double x1; double x2; })fromPoint;
- (id)initWithSourceCell:(id)arg1;
- (void)interruptAnimation;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (id)matchMoveView;
- (id)portaledShadowedWidgetView;
- (void)setFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMatchMoveView:(id)arg1;
- (void)setPortaledShadowedWidgetView:(id)arg1;
- (void)setSourceCell:(id)arg1;
- (id)sourceCell;

@end
