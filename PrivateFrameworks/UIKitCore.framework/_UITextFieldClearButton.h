
@interface _UITextFieldClearButton : UIButton {
    <_UITextFieldClearButtonImageProviding> * _imageProvider;
}

@property (nonatomic) <_UITextFieldClearButtonImageProviding> *imageProvider;

+ (Class)_visualProviderClass;

- (void).cxx_destruct;
- (id)_defaultImageForState:(unsigned long long)arg1 withConfiguration:(id)arg2;
- (bool)_isModernButton;
- (id)imageProvider;
- (void)setImageProvider:(id)arg1;
- (void)setPointerInteractionEnabled:(bool)arg1;

@end
