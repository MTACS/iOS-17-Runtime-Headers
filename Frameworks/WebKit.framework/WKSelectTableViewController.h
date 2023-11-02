
@interface WKSelectTableViewController : UITableViewController {
    bool  _allowsMultipleSelection;
    WKContentView * _contentView;
    double  _fontSize;
    double  _maximumTextWidth;
    long long  _numberOfSections;
    WKSelectPopover * _popover;
    unsigned long long  _singleSelectionIndex;
    unsigned long long  _singleSelectionSection;
    long long  _textAlignment;
}

@property (nonatomic) WKSelectPopover *popover;
@property (nonatomic, readonly) bool shouldDismissWithAnimation;

- (void*)findItemAt:(id)arg1;
- (long long)findItemIndexAt:(id)arg1;
- (id)initWithView:(id)arg1 hasGroups:(bool)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)popover;
- (void)populateCell:(id)arg1 withItem:(const void*)arg2;
- (void)setPopover:(id)arg1;
- (bool)shouldDismissWithAnimation;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
