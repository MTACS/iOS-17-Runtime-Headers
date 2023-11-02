
@interface WKSelectPickerTableViewController : UITableViewController {
    struct RetainPtr<NSMutableSet<NSNumber *>> { 
        void *m_ptr; 
    }  _collapsedSections;
    WKContentView * _contentView;
    struct RetainPtr<UIBarButtonItem> { 
        void *m_ptr; 
    }  _nextButton;
    long long  _numberOfSections;
    struct RetainPtr<UIBarButtonItem> { 
        void *m_ptr; 
    }  _previousButton;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)close:(id)arg1;
- (void)didTapSelectPickerGroupHeaderView:(id)arg1;
- (long long)findItemIndexAt:(id)arg1;
- (id)groupHeaderFont;
- (id)initWithView:(id)arg1;
- (void)next:(id)arg1;
- (long long)numberOfRowsInGroup:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void*)optionItemAtIndexPath:(id)arg1;
- (void)previous:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
