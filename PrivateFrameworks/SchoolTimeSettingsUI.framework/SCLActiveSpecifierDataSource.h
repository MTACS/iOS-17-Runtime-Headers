
@interface SCLActiveSpecifierDataSource : SCLSpecifierDataSource {
    NSBundle * _bundle;
    SCLScheduleFormatter * _formatter;
    NSArray * _permanentSpecifiers;
    PSSpecifier * _scheduleSpecifier;
    NSString * _table;
}

@property (nonatomic, retain) NSBundle *bundle;
@property (nonatomic, retain) SCLScheduleFormatter *formatter;
@property (nonatomic, retain) NSArray *permanentSpecifiers;
@property (nonatomic, retain) PSSpecifier *scheduleSpecifier;
@property (nonatomic, retain) NSString *table;

- (void).cxx_destruct;
- (id)bundle;
- (void)dealloc;
- (id)formatter;
- (id)initWithListController:(id)arg1 viewModel:(id)arg2;
- (id)initWithListController:(id)arg1 viewModel:(id)arg2 options:(unsigned long long)arg3;
- (id)isSchoolTimeActive:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)permanentSpecifiers;
- (void)removeFooterText;
- (id)scheduleSpecifier;
- (id)scheduleSummaryForSpecifier:(id)arg1;
- (void)setBundle:(id)arg1;
- (void)setFormatter:(id)arg1;
- (void)setPermanentSpecifiers:(id)arg1;
- (void)setScheduleSpecifier:(id)arg1;
- (void)setSchoolTimeActive:(id)arg1 specifier:(id)arg2;
- (void)setTable:(id)arg1;
- (void)showEditorForSpecifier:(id)arg1;
- (id)table;
- (id)valueForScheduleSpecifier:(id)arg1;

@end
