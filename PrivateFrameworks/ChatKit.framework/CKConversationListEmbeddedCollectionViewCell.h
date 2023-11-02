
@interface CKConversationListEmbeddedCollectionViewCell : UICollectionViewListCell <CKConversationListCellLayoutConfigurable> {
    CKConversationListCellLayout * _cellLayout;
    unsigned long long  _editingMode;
    NSObject<CKConversationListEmbeddedCollectionViewCellDelegate> * _embeddedCellDelegate;
    UITableViewCell * _embeddedTableViewCell;
    NSArray * _linkInteractions;
    bool  _shouldUseSidebarBackgroundConfiguration;
}

@property (nonatomic, retain) CKConversationListCellLayout *cellLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long editingMode;
@property (nonatomic) NSObject<CKConversationListEmbeddedCollectionViewCellDelegate> *embeddedCellDelegate;
@property (nonatomic, retain) UITableViewCell *embeddedTableViewCell;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *linkInteractions;
@property (nonatomic) bool shouldUseSidebarBackgroundConfiguration;
@property (readonly) Class superclass;

+ (Class)_contentViewClass;
+ (Class)embeddedTableViewCellClass;

- (void).cxx_destruct;
- (id)cellLayout;
- (id)configurationState;
- (void)configureLinkInteractionsFor:(id)arg1;
- (unsigned long long)editingMode;
- (id)embeddedCellDelegate;
- (id)embeddedTableViewCell;
- (void)forwardStateToEmbeddedCell:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)insertCellAccessoryConfiguration;
- (id)leadingEditingAccessoryConfigurationsForEditingMode:(unsigned long long)arg1;
- (id)linkInteractions;
- (id)multiselectCellAccessoryConfiguration;
- (id)pinButton;
- (void)pinButtonTapped:(id)arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)setCellLayout:(id)arg1;
- (void)setEditingMode:(unsigned long long)arg1;
- (void)setEditingMode:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setEmbeddedCellDelegate:(id)arg1;
- (void)setEmbeddedTableViewCell:(id)arg1;
- (void)setLinkInteractions:(id)arg1;
- (void)setShouldUseSidebarBackgroundConfiguration:(bool)arg1;
- (bool)shouldUseSidebarBackgroundConfiguration;
- (id)trailingEditingAccessoryConfigurationsForEditingMode:(unsigned long long)arg1;
- (void)updateConfigurationUsingState:(id)arg1;

@end
