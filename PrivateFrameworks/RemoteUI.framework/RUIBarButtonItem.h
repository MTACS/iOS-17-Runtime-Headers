
@interface RUIBarButtonItem : RUIElement {
    id /* block */  _action;
    UIButton * _backButton;
    UIBarButtonItem * _barButtonItem;
    UIImageView * _imageView;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic, readonly) UIBarButtonItem *barButtonItem;
@property (nonatomic, readonly) NSString *itemType;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (id)_createBarButtonItemWithTitle:(id)arg1 style:(long long)arg2;
- (id)_labelColor;
- (id /* block */)action;
- (id)barButtonItem;
- (id)itemType;
- (void)setAction:(id /* block */)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateBackButtonColors;

@end
