
@interface MCProfileTitlePageWarningSectionController : NSObject <MCProfileTitlePageSectionController> {
    UITableView * _tableView;
    MCProfileWarning * _warning;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) UITableView *tableView;
@property (nonatomic, retain) MCProfileWarning *warning;

- (void).cxx_destruct;
- (id)cellForRowAtIndex:(unsigned long long)arg1;
- (double)heightForHeader;
- (double)heightForRowAtIndex:(unsigned long long)arg1;
- (id)initWithWarning:(id)arg1;
- (unsigned long long)numberOfRows;
- (void)registerCellClassWithTableView:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setWarning:(id)arg1;
- (id)tableView;
- (id)titleForHeader;
- (id)warning;

@end
