
@interface MailUI.MUIMessageListPrototypeCellView : UIView <MessageListCellViewable> {
    void $__lazy_storage_$_disclosureButton;
    void $__lazy_storage_$_subjectLabel;
    void annotatedRelationshipType;
    void backgroundConfiguration;
    void chevronType;
    void configurationState;
    void contactStore;
    void contentConfiguration;
    void isCompact;
    void isEditing;
    void layoutValuesHelper;
    void shouldAnnotateReplyOrForward;
    void summary;
    void viewModel;
}

@property (nonatomic) long long annotatedRelationshipType;
@property (nonatomic, retain) UIBackgroundConfiguration *backgroundConfiguration;
@property (nonatomic) long long chevronType;
@property (nonatomic) bool compact;
@property (nonatomic, retain) UICellConfigurationState *configurationState;
@property (nonatomic, retain) EMCachingContactStore *contactStore;
@property (nonatomic, retain) UIListContentConfiguration *contentConfiguration;
@property (nonatomic, retain) UIButton *disclosureButton;
@property (nonatomic) bool editing;
@property (nonatomic, readonly) MessageListCellLayoutValues *layoutValues;
@property (nonatomic, retain) MessageListCellLayoutValuesHelper *layoutValuesHelper;
@property (nonatomic) bool shouldAnnotateReplyOrForward;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, retain) MessageListCellViewModel *viewModel;

- (void).cxx_destruct;
- (long long)annotatedRelationshipType;
- (void)applyIndicatorPreviewChangeAction:(id)arg1;
- (id)backgroundConfiguration;
- (long long)chevronType;
- (id)configurationState;
- (id)contactStore;
- (id)contentConfiguration;
- (id)disclosureButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCompact;
- (bool)isEditing;
- (void)layoutSubviews;
- (id)layoutValues;
- (id)layoutValuesHelper;
- (void)prepareForReuse;
- (void)refreshForSignificantTimeChange;
- (void)setAnnotatedRelationshipType:(long long)arg1;
- (void)setBackgroundConfiguration:(id)arg1;
- (void)setChevronType:(long long)arg1;
- (void)setCompact:(bool)arg1;
- (void)setConfigurationState:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setContentConfiguration:(id)arg1;
- (void)setDisclosureButton:(id)arg1;
- (void)setDisclosureEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setDisplayUnreadDot:(bool)arg1;
- (void)setDisplayVIP:(bool)arg1;
- (void)setEditing:(bool)arg1;
- (void)setLayoutValuesHelper:(id)arg1;
- (void)setShouldAnnotateReplyOrForward:(bool)arg1;
- (void)setSummary:(id)arg1;
- (void)setViewModel:(id)arg1;
- (bool)shouldAnnotateReplyOrForward;
- (id)summary;
- (id)viewModel;

@end
