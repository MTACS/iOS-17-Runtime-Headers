
@interface HUCheckmarkTitleValueCell : HUTitleValueCell {
    bool  _checked;
    UIImageView * _checkmarkImageView;
}

@property (getter=isChecked, nonatomic) bool checked;
@property (nonatomic, retain) UIImageView *checkmarkImageView;

- (void).cxx_destruct;
- (void)_updateCheckmark;
- (id)checkmarkImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isChecked;
- (void)setChecked:(bool)arg1;
- (void)setCheckmarkImageView:(id)arg1;

@end
