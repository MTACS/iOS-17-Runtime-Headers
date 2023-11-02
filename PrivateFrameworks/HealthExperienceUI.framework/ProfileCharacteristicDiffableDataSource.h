
@interface ProfileCharacteristicDiffableDataSource : UITableViewDiffableDataSource {
    id /* block */  _footerTitleProvider;
}

@property (nonatomic, copy) id /* block */ footerTitleProvider;

- (void).cxx_destruct;
- (id /* block */)footerTitleProvider;
- (void)setFooterTitleProvider:(id /* block */)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;

@end
