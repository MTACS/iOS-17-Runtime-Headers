
@interface MFBarButtonItem : UIBarButtonItem {
    UIImage * _disabledImage;
    UIImage * _enabledImage;
}

@property (nonatomic, retain) UIImage *disabledImage;
@property (nonatomic, retain) UIImage *enabledImage;

- (void).cxx_destruct;
- (id)disabledImage;
- (id)enabledImage;
- (id)initWithImage:(id)arg1 disabledImage:(id)arg2 style:(long long)arg3 target:(id)arg4 action:(SEL)arg5;
- (void)setDisabledImage:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEnabledImage:(id)arg1;

@end
