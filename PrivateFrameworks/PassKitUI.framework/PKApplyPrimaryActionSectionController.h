
@interface PKApplyPrimaryActionSectionController : PKApplyCollectionViewSectionController {
    bool  _primaryButtonLoading;
}

@property (nonatomic) bool primaryButtonLoading;

- (void)_configureContentSection:(id)arg1;
- (id)identifiers;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (id)listLayoutConfigurationWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (bool)primaryButtonLoading;
- (void)setPrimaryButtonLoading:(bool)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
