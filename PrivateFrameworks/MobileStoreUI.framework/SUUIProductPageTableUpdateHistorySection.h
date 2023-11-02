
@interface SUUIProductPageTableUpdateHistorySection : SUUIProductPageTableSection {
    SUUIClientContext * _clientContext;
    SUUIColorScheme * _colorScheme;
    NSDateFormatter * _dateFormatter;
    NSMutableIndexSet * _expandedIndexSet;
    long long  _firstStringIndex;
    SUUIProductPageTableExpandableHeaderView * _headerView;
    NSArray * _releaseNotes;
    SUUILayoutCache * _textLayoutCache;
}

@property (nonatomic, retain) SUUIColorScheme *colorScheme;
@property (nonatomic) long long firstStringIndex;
@property (nonatomic, copy) NSArray *releaseNotes;
@property (nonatomic, retain) SUUILayoutCache *textLayoutCache;

- (void).cxx_destruct;
- (void)_reloadHeaderView;
- (id)colorScheme;
- (long long)firstStringIndex;
- (id)headerViewForTableView:(id)arg1;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithClientContext:(id)arg1;
- (long long)numberOfRowsInSection;
- (id)releaseNotes;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (void)setColorScheme:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setFirstStringIndex:(long long)arg1;
- (void)setReleaseNotes:(id)arg1;
- (void)setTextLayoutCache:(id)arg1;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)textLayoutCache;

@end
