
@interface _UIIndexPathIdentityTracker : NSObject {
    UICollectionView * _collectionView;
    bool  _enforcesManualMapping;
    id  _identityBasedDataSource;
    NSMapTable * _mapping;
    UITableView * _tableView;
}

- (void).cxx_destruct;
- (void)_identifierBasedUpdateWithUpdateItems:(id)arg1;
- (void)_manuallyUpdateWithUpdateItems:(id)arg1;
- (id)_mappingIdentifierForSanitizedIndexPath:(id)arg1;
- (id)currentIndexPathForIdentifier:(id)arg1;
- (void)enforceManualMapping;
- (id)identifierForIndexPath:(id)arg1;
- (id)init;
- (id)initWithCollectionView:(id)arg1;
- (id)initWithTableView:(id)arg1;
- (void)reset;
- (void)updateWithUpdateItems:(id)arg1;

@end
