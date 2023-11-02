
@interface DBScrollButton : UIButton {
    UIImage * _scrollImage;
}

@property (nonatomic, retain) UIImage *scrollImage;

+ (id)buttonWithDirection:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_updateImage;
- (bool)canBecomeFocused;
- (id)scrollImage;
- (void)setEnabled:(bool)arg1;
- (void)setScrollImage:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
