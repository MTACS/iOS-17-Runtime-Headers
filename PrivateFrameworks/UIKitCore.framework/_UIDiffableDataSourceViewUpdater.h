
@interface _UIDiffableDataSourceViewUpdater : NSObject <_UICollectionViewUpdateItemApplying> {
    UICollectionView * _collectionView;
    <_UIDataSourceSnapshotTranslating> * _dataSourceSnapshot;
    bool  _hasPerformedInitialUpdate;
    long long  _sinkKind;
    UITableView * _tableView;
    long long  _tableViewRowAnimation;
    <_UICollectionViewUpdateItemApplying> * _updatesSink;
}

@property (nonatomic) UICollectionView *collectionView;
@property (nonatomic, retain) <_UIDataSourceSnapshotTranslating> *dataSourceSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasPerformedInitialUpdate;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long sinkKind;
@property (readonly) Class superclass;
@property (nonatomic) UITableView *tableView;
@property (nonatomic) long long tableViewRowAnimation;
@property (nonatomic) <_UICollectionViewUpdateItemApplying> *updatesSink;

- (void).cxx_destruct;
- (void)_deleteAllItems;
- (bool)_doesExpectedUpdate:(id)arg1 matchActualUpdates:(id)arg2 allowingEmptyUpdates:(bool)arg3;
- (void)_performMoveUpdate:(id)arg1 onCollectionView:(id)arg2;
- (void)_performMoveUpdate:(id)arg1 onTableView:(id)arg2;
- (void)_performUpdateWithCollectionViewUpdateItems:(id)arg1 dataSourceSnapshot:(id)arg2 updateHandler:(id /* block */)arg3 completion:(id /* block */)arg4 viewPropertyAnimator:(id)arg5 customAnimationsProvider:(id /* block */)arg6 animated:(bool)arg7;
- (void)_performViewUpdates:(id)arg1;
- (void)_reloadData;
- (id)_sectionIndexesToReloadForTableViewCompatibility:(id)arg1;
- (void)_willPerformDiff:(bool)arg1;
- (id)collectionView;
- (id)dataSourceSnapshot;
- (bool)hasPerformedInitialUpdate;
- (id)initWithCollectionView:(id)arg1;
- (id)initWithCollectionViewUpdatesSink:(id)arg1;
- (id)initWithTableView:(id)arg1;
- (id)initWithUpdatesSink:(id)arg1 collectionView:(id)arg2 tableView:(id)arg3;
- (void)setCollectionView:(id)arg1;
- (void)setDataSourceSnapshot:(id)arg1;
- (void)setHasPerformedInitialUpdate:(bool)arg1;
- (void)setSinkKind:(long long)arg1;
- (void)setTableView:(id)arg1;
- (void)setTableViewRowAnimation:(long long)arg1;
- (void)setUpdatesSink:(id)arg1;
- (long long)sinkKind;
- (id)tableView;
- (long long)tableViewRowAnimation;
- (id)targetView;
- (id)updatesSink;

@end
