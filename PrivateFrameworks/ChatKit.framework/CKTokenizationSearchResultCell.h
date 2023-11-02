
@interface CKTokenizationSearchResultCell : UICollectionViewListCell <CKSearchResultCell> {
    bool  _ck_editing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  marginInsets;
    NSString * resultIdentifier;
}

@property (getter=_ck_isEditing, setter=_ck_setEditing:, nonatomic) bool _ck_editing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic, readonly, copy) NSString *resultIdentifier;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (bool)_ck_isEditing;
- (void)_ck_setEditing:(bool)arg1;
- (id)_displayStringForTokenResult:(id)arg1 searchText:(id)arg2;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (void)refreshForSearchTextIfNeeded:(id)arg1;
- (id)resultIdentifier;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
