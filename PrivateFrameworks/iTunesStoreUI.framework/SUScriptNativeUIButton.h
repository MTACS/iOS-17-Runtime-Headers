
@interface SUScriptNativeUIButton : SUScriptButtonNativeObject

+ (id)objectWithDefaultButtonForScriptButton:(id)arg1;

- (void)connectButtonAction;
- (void)destroyNativeObject;
- (void)disconnectButtonAction;
- (id)image;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsets;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTag:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setupNativeObject;
- (long long)tag;
- (id)title;

@end
