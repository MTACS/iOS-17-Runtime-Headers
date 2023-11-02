
@interface _UITableViewSubviewManager : NSObject {
    NSMapTable * _cellsReadyForReuse;
    NSMapTable * _indexPathsForPrefetchedCells;
    NSMutableDictionary * _prefetchedCells;
    UITableViewCell * _reorderingCell;
    NSCountedSet * _reusePreventedCells;
    UITableView<_UITableViewSubviewManagerDelegate> * _tableView;
}

- (void).cxx_destruct;

@end
