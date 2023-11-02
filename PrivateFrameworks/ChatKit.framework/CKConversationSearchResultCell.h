
@interface CKConversationSearchResultCell : UICollectionViewCell <CKConversationListCellLayoutConfigurable, CKConversationSearchCellDelegate, CKSearchResultCell> {
    CALayer * _bottomHairline;
    CKConversationListCellLayout * _cellLayout;
    bool  _ck_editing;
    <CKConversationSearchResultCellDelegate> * _delegate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _marginInsets;
    CKSpotlightQueryResult * _result;
    UITableViewCell<CKConversationSearchCellProtocol> * _searchCell;
    NSString * _searchText;
    bool  _shouldInsetResults;
    CALayer * _topHairline;
}

@property (getter=_ck_isEditing, setter=_ck_setEditing:, nonatomic) bool _ck_editing;
@property (nonatomic, readonly) CALayer *bottomHairline;
@property (nonatomic, retain) CKConversationListCellLayout *cellLayout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKConversationSearchResultCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic, retain) CKSpotlightQueryResult *result;
@property (nonatomic, readonly, copy) NSString *resultIdentifier;
@property (nonatomic, retain) UITableViewCell<CKConversationSearchCellProtocol> *searchCell;
@property (nonatomic, copy) NSString *searchText;
@property (nonatomic) bool shouldInsetResults;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CALayer *topHairline;

+ (Class)conversationListCellClass;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (bool)_ck_isEditing;
- (void)_ck_setEditing:(bool)arg1;
- (id)bottomHairline;
- (id)cellLayout;
- (id)configurationState;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3;
- (id)delegate;
- (void)forwardStateToEmbeddedCell:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)refreshForSearchTextIfNeeded:(id)arg1;
- (id)result;
- (id)resultIdentifier;
- (id)searchCell;
- (id)searchText;
- (void)setCellLayout:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setResult:(id)arg1;
- (void)setSearchCell:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)setShouldInsetResults:(bool)arg1;
- (bool)shouldInsetResults;
- (id)topHairline;
- (void)updateConfigurationUsingState:(id)arg1;
- (double)widthForDeterminingAvatarVisibility;

@end
