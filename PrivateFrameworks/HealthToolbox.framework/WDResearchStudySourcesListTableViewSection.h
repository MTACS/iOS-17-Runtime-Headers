
@interface WDResearchStudySourcesListTableViewSection : WDSourcesListTableViewSection {
    NSArray * _researchSources;
}

@property (nonatomic, copy) NSArray *researchSources;

- (void).cxx_destruct;
- (id)_sourceCellForRow:(unsigned long long)arg1 tableView:(id)arg2;
- (id)cellForRow:(unsigned long long)arg1 table:(id)arg2;
- (void)dataSourceDidUpdate;
- (void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)noneString;
- (unsigned long long)numberOfRows;
- (id)researchSources;
- (void)setResearchSources:(id)arg1;
- (id)titleForFooter;
- (id)titleForHeader;

@end
