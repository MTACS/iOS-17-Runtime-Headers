
@interface CKNicknameUpdatesCollectionView : UICollectionView {
    bool  _suppressDatasourceUpdates;
}

@property (nonatomic) bool suppressDatasourceUpdates;

- (void)setDataSource:(id)arg1;
- (void)setSuppressDatasourceUpdates:(bool)arg1;
- (bool)suppressDatasourceUpdates;

@end
