
@interface CKSearchCollectionView : UICollectionView {
    bool  __ck_editing;
    bool  _lockContentOffset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _marginInsets;
    bool  _suppressDatasourceUpdates;
}

@property (getter=_ck_isEditing, setter=_ck_setEditing:, nonatomic) bool _ck_editing;
@property (nonatomic) bool lockContentOffset;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic) bool suppressDatasourceUpdates;

- (bool)_ck_isEditing;
- (void)_ck_setEditing:(bool)arg1;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (bool)lockContentOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setLockContentOffset:(bool)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSuppressDatasourceUpdates:(bool)arg1;
- (bool)suppressDatasourceUpdates;

@end
