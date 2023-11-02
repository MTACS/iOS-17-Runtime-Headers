
@interface CKWalletItemLinkSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell> {
    LPWebLinkPresentationProperties * _linkMetadata;
    LPLinkView * _linkView;
    NSString * _resultIdentifier;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  marginInsets;
}

@property (getter=_ck_isEditing, setter=_ck_setEditing:, nonatomic) bool _ck_editing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LPWebLinkPresentationProperties *linkMetadata;
@property (nonatomic, retain) LPLinkView *linkView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_metadataGenerated:(id)arg1;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)linkMetadata;
- (id)linkView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (void)prepareForReuse;
- (id)previewSnapshot;
- (void)refreshForSearchTextIfNeeded:(id)arg1;
- (id)resultIdentifier;
- (void)setLinkMetadata:(id)arg1;
- (void)setLinkPresentationProperties:(id)arg1 forSearchResult:(id)arg2;
- (void)setLinkView:(id)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setResultIdentifier:(id)arg1;

@end
