
@interface CKPinnedConversationRichLinkBubble : CKPinnedConversationTailedActivityItemView <LPLinkViewDelegate> {
    long long  _activityItemViewContentScale;
    LPLinkView * _linkView;
    double  _pillCornerRadius;
    CKPinnedConversationRichLinkActivityItem * _richLinkActivityItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LPLinkView *linkView;
@property (nonatomic, readonly) CKPinnedConversationRichLinkActivityItem *richLinkActivityItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateLinkMetadata;
- (void)_updatePillCornerRadius;
- (long long)activityItemViewContentScale;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (long long)contentViewContentMode;
- (double)contentViewHorizontalInsetForPillCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentViewPadding;
- (id)initWithRichLinkActivityItem:(id)arg1;
- (id)linkView;
- (void)linkViewNeedsResize:(id)arg1;
- (double)pillCornerRadius;
- (id)richLinkActivityItem;
- (void)setActivityItem:(id)arg1;
- (void)setActivityItemViewContentScale:(long long)arg1;
- (void)setLinkView:(id)arg1;
- (bool)supportsActivityItemViewContentScale;
- (bool)supportsAlignmentWithOriginationSubAvatarFrame;

@end
