
@interface ICQCloudStorageGraphTableViewRow : RUITableViewRow {
    ACAccount * _account;
    UITableViewCell * _tableCell;
    NSLock * _tableCellLock;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (float)rowHeightWithMax:(float)arg1 peggedHeight:(float)arg2 tableView:(id)arg3 indexPath:(id)arg4;
- (id)tableCell;

@end
