
@interface CKTranscriptReportSpamCell : CKTranscriptLabelCell {
    UILabel * _internalPhishingWarningLabel;
    UIButton * _reportSpamButton;
    bool  _showReportSMSSpam;
}

@property (nonatomic, copy) NSAttributedString *attributedButtonText;
@property (nonatomic, readonly) UILabel *internalPhishingWarningLabel;
@property (nonatomic, retain) UIButton *reportSpamButton;
@property (nonatomic) bool showReportSMSSpam;

+ (id)internalPhishingWarning;
+ (id)internalPhishingWarningLabel;

- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (id)attributedButtonText;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)internalPhishingWarningLabel;
- (struct CGSize { double x1; double x2; })layoutSizeForWidth:(double)arg1 applyLayout:(bool)arg2;
- (void)layoutSubviewsForAlignmentContents;
- (void)prepareForReuse;
- (id)reportSpamButton;
- (void)setAttributedButtonText:(id)arg1;
- (void)setReportSpamButton:(id)arg1;
- (void)setShowReportSMSSpam:(bool)arg1;
- (bool)showReportSMSSpam;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
