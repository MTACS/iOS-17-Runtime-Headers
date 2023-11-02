
@interface PRTitleAlignmentBarButtonItem : UIBarButtonItem {
    UIButton * _button;
    unsigned long long  _titleAlignment;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic, readonly) unsigned long long titleAlignment;

+ (id)buttonConfigurationForTitleAlignment:(unsigned long long)arg1;
+ (id)defaultImage;

- (void).cxx_destruct;
- (id)button;
- (id)initWithTitleAlignment:(unsigned long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setButton:(id)arg1;
- (void)setTitleAlignment:(unsigned long long)arg1;
- (unsigned long long)titleAlignment;
- (unsigned long long)toggle;

@end
