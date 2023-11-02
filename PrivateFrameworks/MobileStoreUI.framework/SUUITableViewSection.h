
@interface SUUITableViewSection : NSObject {
    <SUUITableViewSectionDelegate> * _delegate;
    bool  _hidesHeaderView;
    long long  _sectionIndex;
}

@property (nonatomic) <SUUITableViewSectionDelegate> *delegate;
@property (nonatomic) bool hidesHeaderView;
@property (nonatomic, readonly) long long numberOfRowsInSection;
@property (nonatomic) long long sectionIndex;

- (void).cxx_destruct;
- (id)delegate;
- (id)footerViewForTableView:(id)arg1;
- (id)headerViewForTableView:(id)arg1;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (bool)hidesHeaderView;
- (long long)numberOfRowsInSection;
- (long long)sectionIndex;
- (void)setDelegate:(id)arg1;
- (void)setHidesHeaderView:(bool)arg1;
- (void)setSectionIndex:(long long)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;

@end
