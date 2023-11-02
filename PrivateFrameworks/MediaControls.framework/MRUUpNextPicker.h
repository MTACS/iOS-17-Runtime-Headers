
@interface MRUUpNextPicker : UIView <MRUDiffableDataSourceDelegate, MRUUpNextDataSourceDelegate, UITableViewDelegate> {
    MRUUpNextDataSource * _dataSource;
    MRUDiffableDataSource * _diffableDataSource;
    UITableView * _tableView;
}

@property (nonatomic, readonly) MRUUpNextDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MRUDiffableDataSource *diffableDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)configureCell:(id)arg1 forMovie:(id)arg2;
- (void)configureCell:(id)arg1 forSong:(id)arg2;
- (void)configureCell:(id)arg1 forTVEpisode:(id)arg2;
- (id)dataSource;
- (void)dataSource:(id)arg1 didDeleteItemWithIdentifier:(id)arg2;
- (void)dataSource:(id)arg1 moveItemToTopWithIdentifier:(id)arg2;
- (void)dataSource:(id)arg1 moveItemWithIdentifier:(id)arg2 aferIndentifier:(id)arg3;
- (id)diffableDataSource;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 dataSource:(id)arg2;
- (void)layoutSubviews;
- (id)reponseItemForIndexPath:(id)arg1;
- (void)setDiffableDataSource:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)upNextDataSource:(id)arg1 didChangeResponseItemIDs:(id)arg2;
- (void)updateDiffableDataSourceAnimated:(bool)arg1;

@end
