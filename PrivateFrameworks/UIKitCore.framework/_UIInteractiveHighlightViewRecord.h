
@interface _UIInteractiveHighlightViewRecord : NSObject {
    UIVisualEffectView * _effectView;
    NSHashTable * _interactiveHighlightEffects;
    _UIPortalView * _portalView;
    UIView * _superview;
    UIView * _view;
}

@property (nonatomic, retain) UIVisualEffectView *effectView;
@property (nonatomic, retain) NSHashTable *interactiveHighlightEffects;
@property (nonatomic, retain) _UIPortalView *portalView;
@property (nonatomic) UIView *superview;
@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (id)effectView;
- (id)interactiveHighlightEffects;
- (id)portalView;
- (void)setEffectView:(id)arg1;
- (void)setInteractiveHighlightEffects:(id)arg1;
- (void)setPortalView:(id)arg1;
- (void)setSuperview:(id)arg1;
- (void)setView:(id)arg1;
- (id)superview;
- (id)view;

@end
