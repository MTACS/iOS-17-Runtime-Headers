
@interface SUScriptNativeUIBarButtonItem : SUScriptButtonNativeObject {
    bool  _isBackButton;
}

+ (id)objectWithDefaultButtonForScriptButton:(id)arg1;

- (int)buttonType;
- (void)connectButtonAction;
- (void)destroyNativeObject;
- (void)disconnectButtonAction;
- (void)hideConfirmationAnimated:(bool)arg1;
- (id)image;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsets;
- (bool)isBackButton;
- (bool)isLoading;
- (bool)isShowingConfirmation;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLoading:(bool)arg1;
- (void)setStyleFromString:(id)arg1;
- (void)setTag:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setupNativeObject;
- (void)showConfirmationWithTitle:(id)arg1 animated:(bool)arg2;
- (id)styleString;
- (id)systemItemString;
- (long long)tag;
- (id)title;

@end