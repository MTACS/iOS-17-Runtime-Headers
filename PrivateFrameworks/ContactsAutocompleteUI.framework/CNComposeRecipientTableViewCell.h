
@interface CNComposeRecipientTableViewCell : CNComposeTableViewCell <NUIContainerViewDelegate> {
    CNComposeRecipientActionButton * _actionButton;
    unsigned long long  _actionType;
    NSArray * _activeConstraints;
    CNAvatarViewController * _avatarViewController;
    <CNComposeRecipientTableViewCellDelegate> * _delegate;
    NSUUID * _displaySessionUUID;
    bool  _shouldHighlightCompleteMatches;
}

@property (nonatomic, retain) CNComposeRecipientActionButton *actionButton;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic, retain) NSArray *activeConstraints;
@property (nonatomic, readonly) CNAvatarViewController *avatarViewController;
@property (readonly, copy) NSString *debugDescription;
@property <CNComposeRecipientTableViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSUUID *displaySessionUUID;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldHighlightCompleteMatches;
@property (readonly) Class superclass;

+ (id)_attributedStringForGroupMembersOfRecipient:(id)arg1 matchedStrings:(id)arg2 constrainedToWidth:(double)arg3 font:(id)arg4;
+ (id)_attributedStringForListOfGroupMemberNames:(id)arg1 numberTruncated:(unsigned long long)arg2;
+ (id)_attributedTitleForRecipient:(id)arg1 matchedStrings:(id)arg2 constrainedToWidth:(double)arg3 font:(id)arg4;
+ (double)additionalSeparatorInset;
+ (id)attributedStringWithBoldedRangesForMatchedStrings:(id)arg1 inString:(id)arg2 font:(id)arg3 boldAllMatches:(bool)arg4;
+ (bool)avatarsAreHidden;
+ (id)identifier;

- (void).cxx_destruct;
- (id)actionButton;
- (void)actionButtonTapped;
- (unsigned long long)actionType;
- (id)activeConstraints;
- (void)applyActionButtonTouchInsets;
- (id)assembleContactAvatarsForRecipient:(id)arg1;
- (void)assignContactAvatarsToController:(id)arg1;
- (void)assignImageDataToController:(id)arg1;
- (void)assignImageToController:(id)arg1;
- (id)avatarViewController;
- (bool)canCollapseRecipient;
- (bool)canExpandRecipient;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (id)delegate;
- (id)displaySessionUUID;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)labelsChangedWidth:(double)arg1;
- (void)prepareForReuse;
- (void)setActionButton:(id)arg1;
- (void)setActionType:(unsigned long long)arg1;
- (void)setActionType:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setActiveConstraints:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplaySessionUUID:(id)arg1;
- (void)setRecipient:(id)arg1;
- (void)setShouldHighlightCompleteMatches:(bool)arg1;
- (void)setupAvatarViewControllerWithSettings:(id)arg1;
- (bool)shouldHighlightCompleteMatches;
- (bool)supportsAvatarView;
- (double)trailingButtonWidth;
- (void)updateButtonColor;
- (void)updateLabelsContrainedToWidth:(double)arg1;

@end
