
@interface UIMenuController : NSObject <DOCDeprecatedUIMenuControllerMethods> {
    long long  _arrowDirection;
    bool  _menuVisible;
}

@property (nonatomic) long long arrowDirection;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } menuFrame;
@property (nonatomic, copy) NSArray *menuItems;
@property (getter=isMenuVisible, nonatomic) bool menuVisible;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)sharedMenuController;

- (id)_asCalloutBarDelegate;
- (long long)arrowDirection;
- (void)hideMenu;
- (void)hideMenuFromView:(id)arg1;
- (id)init;
- (bool)isMenuVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })menuFrame;
- (id)menuItems;
- (void)setArrowDirection:(long long)arg1;
- (void)setMenuItems:(id)arg1;
- (void)setMenuVisible:(bool)arg1;
- (void)setMenuVisible:(bool)arg1 animated:(bool)arg2;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)showMenuFromView:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)update;

// Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore

- (void)hideMenuIfActive;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (void)ic_addMenuItemsIfNecessary:(id)arg1;

@end
