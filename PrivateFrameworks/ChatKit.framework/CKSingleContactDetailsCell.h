
@interface CKSingleContactDetailsCell : CKDetailsCell <CKDetailsCell> {
    UIImageView * _chervonImageView;
    UILabel * _subTitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImageView *chervonImageView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *subTitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)reuseIdentifier;
+ (bool)shouldHighlight;

- (void).cxx_destruct;
- (id)chervonImageView;
- (void)initConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setChervonImageView:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subTitleLabel;
- (id)titleLabel;

@end
