
@interface EventKitTCCTableViewCell : UITableViewCell {
    UILabel * _subtitleLabel;
    UIImageView * _symbolImageView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UIImageView *symbolImageView;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 title:(id)arg3 subtitle:(id)arg4 symbolName:(id)arg5 imageColor:(id)arg6;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSymbolImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (id)symbolImageView;
- (id)titleLabel;

@end
