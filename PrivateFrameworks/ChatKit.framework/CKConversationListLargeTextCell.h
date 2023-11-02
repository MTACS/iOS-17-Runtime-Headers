
@interface CKConversationListLargeTextCell : CKConversationListCell {
    NSArray * _contentSizeCategoryDependentConstraints;
    NSLayoutConstraint * _editingDependentConstraint;
    UILayoutGuide * _firstLineLayoutGuide;
    NSTextAttachment * _unreadIndicatorAttachment;
}

@property (nonatomic, retain) NSArray *contentSizeCategoryDependentConstraints;
@property (nonatomic, retain) NSLayoutConstraint *editingDependentConstraint;
@property (nonatomic, retain) UILayoutGuide *firstLineLayoutGuide;
@property (nonatomic, retain) NSTextAttachment *unreadIndicatorAttachment;

+ (double)cellHeightForDisplayScale:(double)arg1;
+ (id)hyphenationParagraphStyle;
+ (id)identifierForConversation:(id)arg1;

- (void).cxx_destruct;
- (id)_constraintForEditing:(bool)arg1;
- (id)_contentSizeCategoryDependentConstraints;
- (id)contentSizeCategoryDependentConstraints;
- (void)contentSizeCategoryDidChange;
- (id)editingDependentConstraint;
- (id)firstLineLayoutGuide;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setContentSizeCategoryDependentConstraints:(id)arg1;
- (void)setEditingDependentConstraint:(id)arg1;
- (void)setFirstLineLayoutGuide:(id)arg1;
- (void)setUnreadIndicatorAttachment:(id)arg1;
- (id)unreadIndicatorAttachment;
- (id)unreadIndicatorImageForVisibility:(bool)arg1 withMuteState:(bool)arg2;
- (void)updateContentsForConversation:(id)arg1 fastPreview:(bool)arg2;
- (void)updateForEditing:(bool)arg1;
- (void)updateFromLabelWithText:(id)arg1;
- (void)updateUnreadIndicatorWithImage:(id)arg1;

@end
