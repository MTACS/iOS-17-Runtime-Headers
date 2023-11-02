
@interface PSDocumentsPolicyController : PSListController {
    NSString * _bundleIdentifier;
    PSSpecifier * _groupSpecifier;
    bool  _isFirstSourceResults;
    DOCSourceSearchingContext * _searchingContext;
    DOCDocumentSource * _selectedDocumentSource;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) PSSpecifier *groupSpecifier;
@property (nonatomic) bool isFirstSourceResults;
@property (nonatomic, retain) DOCSourceSearchingContext *searchingContext;
@property (nonatomic, retain) DOCDocumentSource *selectedDocumentSource;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)documentSource;
- (id)groupSpecifier;
- (bool)isFirstSourceResults;
- (id)searchingContext;
- (id)selectedDocumentSource;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDocumentSource:(id)arg1;
- (void)setGroupSpecifier:(id)arg1;
- (void)setIsFirstSourceResults:(bool)arg1;
- (void)setSearchingContext:(id)arg1;
- (void)setSelectedDocumentSource:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateFooterAnimated:(bool)arg1;
- (void)updateRadioGroupWithSources:(id)arg1 animated:(bool)arg2;

@end