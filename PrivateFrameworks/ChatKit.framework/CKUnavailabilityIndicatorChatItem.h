
@interface CKUnavailabilityIndicatorChatItem : CKChatItem {
    NSAttributedString * _unavailableTitleLabelAttributedTextWhenDisplayingNotifyAnywayButton;
    NSAttributedString * _unavailableTitleLabelAttributedTextWhenNotDisplayingNotifyAnywayButton;
}

@property (nonatomic, readonly) bool displayNotifyAnywayButton;
@property (nonatomic, readonly) IMUnavailabilityIndicatorChatItem *imUnavailabilityIndicatorChatItem;
@property (nonatomic, retain) NSAttributedString *unavailableTitleLabelAttributedTextWhenDisplayingNotifyAnywayButton;
@property (nonatomic, retain) NSAttributedString *unavailableTitleLabelAttributedTextWhenNotDisplayingNotifyAnywayButton;

- (void).cxx_destruct;
- (void)_loadUnavailableTitleLabelTextVariants;
- (id)_unavailableTitleLabelAttributedTextWhenDisplayingNotifyAnywayButton:(bool)arg1;
- (Class)cellClass;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (bool)displayDuringSend;
- (bool)displayNotifyAnywayButton;
- (id)imUnavailabilityIndicatorChatItem;
- (id)layoutItemSpacingWithEnvironment:(id)arg1 datasourceItemIndex:(long long)arg2 allDatasourceItems:(id)arg3 supplementryItems:(id)arg4;
- (unsigned long long)layoutType;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptText;
- (void)setUnavailableTitleLabelAttributedTextWhenDisplayingNotifyAnywayButton:(id)arg1;
- (void)setUnavailableTitleLabelAttributedTextWhenNotDisplayingNotifyAnywayButton:(id)arg1;
- (BOOL)transcriptOrientation;
- (id)unavailableTitleLabelAttributedTextWhenDisplayingNotifyAnywayButton;
- (id)unavailableTitleLabelAttributedTextWhenNotDisplayingNotifyAnywayButton;
- (void)unloadTranscriptText;

@end
