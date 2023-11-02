
@interface CKConversationListStandardCell : CKConversationListCell {
    CKAvatarView * _avatarView;
    bool  _showTypingIndicator;
    UIImageView * _unreadIndicatorImageView;
}

@property (nonatomic, retain) CKAvatarView *avatarView;
@property (nonatomic) bool showTypingIndicator;
@property (nonatomic, retain) UIImageView *unreadIndicatorImageView;

+ (id)identifierForConversation:(id)arg1;
+ (double)leadingLayoutMargin;

- (void).cxx_destruct;
- (bool)_boundsShouldCollapseContent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calculateIndicatorFrameForSize:(struct CGSize { double x1; double x2; })arg1 trailing:(bool)arg2 displayScale:(double)arg3 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
- (void)_calculateLayoutFrames;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calculateRectVerticallyCenteredWithFirstTextLineOfLabel:(id)arg1 horizontallyCenteredInColumn:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 size:(struct CGSize { double x1; double x2; })arg3 offset:(struct CGPoint { double x1; double x2; })arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calculateSummaryLabelFrameForColumn:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 summaryLabelCapFrameYOrigin:(double)arg2 displayScale:(double)arg3;
- (void)_configureDateLabelAppearanceForConversation:(id)arg1;
- (void)_configureSummaryLabelAppearanceForConversation:(id)arg1;
- (bool)_isCollapsed;
- (void)_resetTypingIndicator;
- (bool)_shouldHideMuteIndicator;
- (bool)_shouldHideUnreadIndicatorForEditing:(bool)arg1;
- (bool)_shouldShowAvatarForWidth:(double)arg1;
- (bool)_shouldShowTypingIndicatorForConversation:(id)arg1;
- (void)_startTypingIndicator;
- (void)_stopTypingIndicator;
- (void)_updateAvatarView;
- (void)_updateLabelVisibility;
- (id)avatarView;
- (id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (bool)avatarView:(id)arg1 shouldShowContact:(id)arg2;
- (id)contactsForPreviewInteractionForAvatarView:(id)arg1 suggestedKeysToFetch:(id)arg2;
- (void)dealloc;
- (void)forceUnreadIndicatorVisibility:(bool)arg1 forConversation:(id)arg2 animated:(bool)arg3;
- (void)increaseContrastDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)overrideImageDataForPreviewInteractionForAvatarView:(id)arg1;
- (void)prepareForReuse;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)registerForEvents;
- (void)setAvatarView:(id)arg1;
- (void)setMuted:(bool)arg1;
- (void)setShowTypingIndicator:(bool)arg1;
- (void)setUnreadIndicatorImageView:(id)arg1;
- (bool)showTypingIndicator;
- (void)traitCollectionDidChange:(id)arg1;
- (id)unreadIndicatorImageView;
- (void)updateContentsForConversation:(id)arg1;
- (void)updateContentsForConversation:(id)arg1 fastPreview:(bool)arg2;
- (void)updateForEditing:(bool)arg1;
- (void)updateFromLabelWithText:(id)arg1;
- (void)updateTypingIndicatorIfNeeded;
- (void)updateUnreadIndicatorWithImage:(id)arg1;
- (void)updateUnreadIndicatorWithImage:(id)arg1 animated:(bool)arg2;
- (void)updateWithForwardedConfigurationState:(id)arg1;

@end
