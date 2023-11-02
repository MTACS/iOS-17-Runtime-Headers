
@interface SCLUnlockHistoryTableViewCell : PSTableCell {
    SCLHistoryItemView * _historyItemView;
}

@property (nonatomic, readonly) SCLHistoryItemView *historyItemView;

- (void).cxx_destruct;
- (id)historyItemView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;

@end
