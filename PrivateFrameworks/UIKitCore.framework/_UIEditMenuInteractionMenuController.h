
@interface _UIEditMenuInteractionMenuController : UIMenuController <UIEditMenuInteractionDelegate> {
    UIEditMenuInteraction * _currentMenuInteraction;
    NSArray * _extraMenuItems;
    bool  _menuNeedsUpdate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetRect;
    UIView * _targetView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationDidAddDeactivationReason:(id)arg1;
- (void)_dismissEditMenu;
- (id)_editMenuInteraction:(id)arg1 firstResponderTargetForConfiguration:(id)arg2;
- (void)_prepareEditMenuInteractionIfNeeded;
- (void)_presentEditMenu;
- (long long)_resolvedEditMenuArrowDirection;
- (void)_setTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(bool)arg3;
- (bool)_shouldPassthroughInView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_targetRect;
- (id)_targetView;
- (void)dealloc;
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editMenuInteraction:(id)arg1 targetRectForConfiguration:(id)arg2;
- (void)editMenuInteraction:(id)arg1 willDismissMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)editMenuInteraction:(id)arg1 willPresentMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)hideMenu;
- (void)hideMenuFromView:(id)arg1;
- (id)init;
- (bool)isMenuVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })menuFrame;
- (id)menuItems;
- (void)setMenuItems:(id)arg1;
- (void)setMenuVisible:(bool)arg1 animated:(bool)arg2;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)showMenuFromView:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)update;

@end
