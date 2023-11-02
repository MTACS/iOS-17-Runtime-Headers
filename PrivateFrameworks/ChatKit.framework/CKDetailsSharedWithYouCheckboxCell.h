
@interface CKDetailsSharedWithYouCheckboxCell : CKTranscriptDetailsResizableCell <CKDetailsCell> {
    UISwitch * _controlSwitch;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UISwitch *controlSwitch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)reuseIdentifier;
+ (bool)shouldHighlight;

- (void).cxx_destruct;
- (void)_configureNewControlSwitch;
- (void)_configureNewTitleLabel;
- (id)controlSwitch;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setControlSwitch:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;

@end
