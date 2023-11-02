
@interface ASCredentialRequestButton : UIControl {
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *buttonText;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)buttonText;
- (void)setButtonText:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end
