
@interface STStorageTipInfoCell : PSTableCell {
    NSMutableArray * _constraints;
    UILabel * _infoLabel;
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)updateConstraints;

@end
