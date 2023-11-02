
@interface SCLHistoryDayDataSource : SCLSpecifierDataSource {
    PSSpecifier * _countSpecifier;
    PSSpecifier * _itemSpecifier;
}

@property (nonatomic, retain) PSSpecifier *countSpecifier;
@property (nonatomic, retain) PSSpecifier *itemSpecifier;

- (void).cxx_destruct;
- (id)countSpecifier;
- (id)initWithListController:(id)arg1 viewModel:(id)arg2 historyGroup:(id)arg3 title:(id)arg4;
- (id)itemSpecifier;
- (void)setCountSpecifier:(id)arg1;
- (void)setItemSpecifier:(id)arg1;

@end
