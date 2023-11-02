
@interface CKDetailsTUConversationCell : CKDetailsCell <CKDetailsCell> {
    UIButton * _actionButton;
    TUConversation * _conversation;
    UIImageView * _iconView;
    unsigned long long  _state;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIButton *actionButton;
@property (nonatomic, readonly) double buttonInteritemSpacing;
@property (nonatomic, readonly) double buttonTitleHorizontalSpacing;
@property (nonatomic, readonly) double buttonTitleVerticalSpacing;
@property (nonatomic, retain) TUConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, readonly) double insetPadding;
@property (nonatomic, readonly) double interitemSpacing;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)reuseIdentifier;
+ (bool)shouldHighlight;

- (void).cxx_destruct;
- (void)_handleMultiWayStateChange:(id)arg1;
- (id)actionButton;
- (void)actionButtonTapped:(id)arg1;
- (void)addConstraints;
- (double)buttonInteritemSpacing;
- (double)buttonTitleHorizontalSpacing;
- (double)buttonTitleVerticalSpacing;
- (void)configureActionButton;
- (void)configureIconView;
- (void)configureSubtitle;
- (id)conversation;
- (void)formatIconViewForExpanse;
- (void)formatIconViewForFaceTime;
- (void)formatSubtitleForText;
- (void)formatTitle;
- (id)iconView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 conversation:(id)arg3;
- (double)insetPadding;
- (double)interitemSpacing;
- (void)layoutSubviews;
- (void)setActionButton:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setupView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)state;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)updateView;

@end
