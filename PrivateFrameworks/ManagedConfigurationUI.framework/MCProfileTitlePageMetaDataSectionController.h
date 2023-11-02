
@interface MCProfileTitlePageMetaDataSectionController : NSObject <MCProfileTitlePageSectionController> {
    MCProfileTitlePageSettingsIconCell * _iconCell;
    MCProfileTitlePageOrganizationCell * _orgCell;
    MCProfile * _profile;
    MCProfileTitlePageSubtitleCell * _subtitleCell;
    UITableView * _tableView;
    MCProfileTitlePageTitleCell * _titleCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MCProfileTitlePageSettingsIconCell *iconCell;
@property (nonatomic, retain) MCProfileTitlePageOrganizationCell *orgCell;
@property (nonatomic, retain) MCProfile *profile;
@property (nonatomic, retain) MCProfileTitlePageSubtitleCell *subtitleCell;
@property (readonly) Class superclass;
@property (nonatomic) UITableView *tableView;
@property (nonatomic, retain) MCProfileTitlePageTitleCell *titleCell;

- (void).cxx_destruct;
- (id)cellForRowAtIndex:(unsigned long long)arg1;
- (double)heightForHeader;
- (double)heightForRowAtIndex:(unsigned long long)arg1;
- (id)iconCell;
- (id)initWithProfile:(id)arg1;
- (unsigned long long)numberOfRows;
- (id)orgCell;
- (id)profile;
- (void)registerCellClassWithTableView:(id)arg1;
- (void)setIconCell:(id)arg1;
- (void)setOrgCell:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setSubtitleCell:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTitleCell:(id)arg1;
- (id)subtitleCell;
- (id)tableView;
- (id)titleCell;
- (id)titleForHeader;

@end
