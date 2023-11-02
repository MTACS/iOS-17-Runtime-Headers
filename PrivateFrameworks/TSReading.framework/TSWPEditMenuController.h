
@interface TSWPEditMenuController : NSObject <TSKKeyboardObserver> {
    bool  _isBeginningEditing;
    int  _menuState;
    bool  _showMenuOnKeyboard;
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
@property (nonatomic) bool isBeginningEditing;
@property (nonatomic) bool showMenuOnKeyboard;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetRect;
@property (nonatomic) UIView *targetView;

+ (void)hideEditMenu;
+ (bool)isAnimating;
+ (int)menuState;
+ (id)p_sharedEditMenuController;
+ (id)sharedEditMenuController;
+ (void)showEditMenuAtTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 canCenterHUD:(bool)arg2 interactiveCanvasController:(id)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)isBeginningEditing;
- (void)keyboardDidHideOrUndock:(id)arg1;
- (void)keyboardDidShowOrDock:(id)arg1;
- (void)p_clearIsBeginningEditing;
- (void)p_didAnimateKeyboard;
- (void)p_didHideMenu:(id)arg1;
- (void)p_didShowMenu:(id)arg1;
- (void)p_setMenuVisible:(id)arg1;
- (void)p_willHideMenu:(id)arg1;
- (void)p_willShowMenu:(id)arg1;
- (void)setIsBeginningEditing:(bool)arg1;
- (void)setShowMenuOnKeyboard:(bool)arg1;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTargetView:(id)arg1;
- (bool)showMenuOnKeyboard;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRect;
- (id)targetView;

@end
