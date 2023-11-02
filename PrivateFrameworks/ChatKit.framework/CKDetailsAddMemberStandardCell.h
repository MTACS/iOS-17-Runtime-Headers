
@interface CKDetailsAddMemberStandardCell : CKDetailsAddMemberCell {
    UIImageView * _addIcon;
}

@property (nonatomic, retain) UIImageView *addIcon;

+ (double)preferredHeight;

- (void).cxx_destruct;
- (id)addIcon;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setAddIcon:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
