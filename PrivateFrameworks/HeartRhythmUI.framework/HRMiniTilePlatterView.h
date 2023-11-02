
@interface HRMiniTilePlatterView : UIView {
    UILabel * _actionLabel;
    NSString * _actionText;
    NSString * _body;
    UILabel * _bodyLabel;
    NSString * _footnote;
    UILabel * _footnoteLabel;
    UIImage * _icon;
    UIImageView * _iconImageView;
    HKSeparatorLineView * _separatorView;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *actionLabel;
@property (nonatomic, copy) NSString *actionText;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic, copy) NSString *footnote;
@property (nonatomic, retain) UILabel *footnoteLabel;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic, retain) HKSeparatorLineView *separatorView;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_actionFont;
- (id)_actionTextStyle;
- (double)_bodyBottomToFootnoteTop;
- (id)_bodyFont;
- (id)_bodyFontTextStyle;
- (id)_footnoteFont;
- (id)_footnoteTextStyle;
- (void)_setupConstraints;
- (void)_setupView;
- (double)_titleBottomToBodyTop;
- (id)_titleFont;
- (id)_titleFontTextStyle;
- (id)actionLabel;
- (id)actionText;
- (id)body;
- (id)bodyLabel;
- (id)footnote;
- (id)footnoteLabel;
- (id)icon;
- (id)iconImageView;
- (id)initWithtitle:(id)arg1 body:(id)arg2 footnote:(id)arg3 icon:(id)arg4 actionText:(id)arg5;
- (id)separatorView;
- (void)setActionLabel:(id)arg1;
- (void)setActionText:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setBodyLabel:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setFootnoteLabel:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)title;
- (id)titleLabel;

@end
