
@interface _UICalloutBarMenuController : UIMenuController <UICalloutBarDelegate> {
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
- (id)_asCalloutBarDelegate;
- (void)_hideMenuAnimated:(bool)arg1;
- (bool)_menuHidden;
- (void)_removeWindowWillRotateObserver;
- (void)_reparentCalloutBarIfNeeded;
- (void)_setTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(bool)arg3;
- (void)_showMenuAnimated:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_targetRect;
- (id)_targetView;
- (bool)_updateAnimated:(bool)arg1 checkVisible:(bool)arg2;
- (void)_windowWillRotate:(id)arg1;
- (void)calloutBar:(id)arg1 didFinishAnimation:(id)arg2;
- (void)calloutBar:(id)arg1 willStartAnimation:(id)arg2;
- (void)dealloc;
- (void)hideMenu;
- (void)hideMenuFromView:(id)arg1;
- (bool)isMenuVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })menuFrame;
- (id)menuItems;
- (void)setMenuItems:(id)arg1;
- (void)setMenuVisible:(bool)arg1 animated:(bool)arg2;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)showMenuFromView:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)update;

@end
