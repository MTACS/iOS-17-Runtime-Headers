
@protocol MessageListCellViewable <NSObject>

@required

- (long long)annotatedRelationshipType;
- (void)applyIndicatorPreviewChangeAction:(MSTriageChangeAction *)arg1;
- (UIBackgroundConfiguration *)backgroundConfiguration;
- (long long)chevronType;
- (UICellConfigurationState *)configurationState;
- (EMCachingContactStore *)contactStore;
- (UIListContentConfiguration *)contentConfiguration;
- (UIButton *)disclosureButton;
- (bool)isCompact;
- (bool)isEditing;
- (MessageListCellLayoutValues *)layoutValues;
- (MessageListCellLayoutValuesHelper *)layoutValuesHelper;
- (void)prepareForReuse;
- (void)refreshForSignificantTimeChange;
- (void)setAnnotatedRelationshipType:(long long)arg1;
- (void)setBackgroundConfiguration:(UIBackgroundConfiguration *)arg1;
- (void)setChevronType:(long long)arg1;
- (void)setCompact:(bool)arg1;
- (void)setConfigurationState:(UICellConfigurationState *)arg1;
- (void)setContactStore:(EMCachingContactStore *)arg1;
- (void)setContentConfiguration:(UIListContentConfiguration *)arg1;
- (void)setDisclosureEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setDisplayUnreadDot:(bool)arg1;
- (void)setDisplayVIP:(bool)arg1;
- (void)setEditing:(bool)arg1;
- (void)setLayoutValuesHelper:(MessageListCellLayoutValuesHelper *)arg1;
- (void)setShouldAnnotateReplyOrForward:(bool)arg1;
- (void)setSummary:(NSString *)arg1;
- (void)setViewModel:(MessageListCellViewModel *)arg1;
- (bool)shouldAnnotateReplyOrForward;
- (NSString *)summary;
- (MessageListCellViewModel *)viewModel;

@end
