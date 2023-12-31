
@interface _UITableViewDragItemContext : NSObject {
    NSIndexPath * _indexPath;
    UITableView * _tableView;
}

@property (nonatomic, retain) NSIndexPath *indexPath;
@property (nonatomic) UITableView *tableView;

- (void).cxx_destruct;
- (id)indexPath;
- (id)initWithIndexPath:(id)arg1 forTableView:(id)arg2;
- (void)setIndexPath:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;

@end
