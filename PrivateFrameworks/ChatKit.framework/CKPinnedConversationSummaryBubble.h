
@interface CKPinnedConversationSummaryBubble : CKPinnedConversationTailedActivityItemView {
    CKPinnedConversationSummaryBubbleActivityItem * _summaryBubbleActivityItem;
    UILabel * _summaryLabel;
}

@property (nonatomic, readonly) CKPinnedConversationSummaryBubbleActivityItem *summaryBubbleActivityItem;
@property (nonatomic, retain) UILabel *summaryLabel;
@property (nonatomic, readonly) NSAttributedString *summaryText;

- (void).cxx_destruct;
- (id)_summaryLabelTextColor;
- (void)_updateSummaryLabel;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (long long)contentViewContentMode;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentViewPadding;
- (id)initWithSummaryBubbleActivityItem:(id)arg1;
- (double)pillCornerRadius;
- (void)setActivityItem:(id)arg1;
- (void)setActivityItemViewContentScale:(long long)arg1;
- (void)setSummaryLabel:(id)arg1;
- (id)summaryBubbleActivityItem;
- (id)summaryLabel;
- (id)summaryLabelFont;
- (id)summaryText;
- (bool)supportsActivityItemViewContentScale;
- (bool)supportsAlignmentWithOriginationSubAvatarFrame;
- (void)traitCollectionDidChange:(id)arg1;

@end
