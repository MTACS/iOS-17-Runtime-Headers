
@interface AAUIInheritanceAccessKeyCell : PSTableCell {
    UITextView * _accessKeyTextView;
    UIImageView * _qrCodeImageView;
}

@property (nonatomic, retain) UITextView *accessKeyTextView;
@property (nonatomic, retain) UIImageView *qrCodeImageView;

+ (id)specifierForAcessKey:(id)arg1 qrCodeImage:(id)arg2;

- (void).cxx_destruct;
- (void)_setupViews;
- (id)accessKeyTextView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)qrCodeImageView;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setAccessKeyTextView:(id)arg1;
- (void)setQrCodeImageView:(id)arg1;

@end
