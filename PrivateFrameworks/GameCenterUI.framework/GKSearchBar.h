
@interface GKSearchBar : UISearchBar {
    GKCollectionViewDataSource * _dataSource;
    long long  _sectionIndex;
}

@property (nonatomic, retain) GKCollectionViewDataSource *dataSource;
@property (nonatomic) long long sectionIndex;

- (void).cxx_destruct;
- (id)dataSource;
- (long long)sectionIndex;
- (void)setDataSource:(id)arg1;
- (void)setSectionIndex:(long long)arg1;

@end
