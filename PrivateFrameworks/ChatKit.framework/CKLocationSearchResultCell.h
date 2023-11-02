
@interface CKLocationSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell> {
    UIVisualEffectView * _blurEffectView;
    unsigned long long  _mode;
    UILabel * _placeLabel;
    CKSpotlightQueryResult * _result;
    NSString * _searchText;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  marginInsets;
}

@property (getter=_ck_isEditing, setter=_ck_setEditing:, nonatomic) bool _ck_editing;
@property (nonatomic, retain) UIVisualEffectView *blurEffectView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, retain) UILabel *placeLabel;
@property (nonatomic, retain) CKSpotlightQueryResult *result;
@property (nonatomic, readonly, copy) NSString *resultIdentifier;
@property (nonatomic, retain) NSString *searchText;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_configurePlaceLabelWithResult:(id)arg1 searchText:(id)arg2;
- (void)_thumbnailGenerated:(id)arg1;
- (id)blurEffectView;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (unsigned long long)mode;
- (id)placeLabel;
- (void)prepareForReuse;
- (void)refreshForSearchTextIfNeeded:(id)arg1;
- (id)result;
- (id)resultIdentifier;
- (id)searchText;
- (void)setBlurEffectView:(id)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setPlaceLabel:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
