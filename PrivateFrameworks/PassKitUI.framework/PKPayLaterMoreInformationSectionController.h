
@interface PKPayLaterMoreInformationSectionController : PKPayLaterSectionController {
    UIImageSymbolConfiguration * _iconFontConfiguration;
    double  _maxIconWidth;
    PKPayLaterSetupFlowController * _setupController;
}

- (void).cxx_destruct;
- (void)_configureDynamicSection:(id)arg1 snapshot:(id)arg2;
- (id)identifiers;
- (id)initWithSetupFlowController:(id)arg1 dynamicContentPage:(id)arg2;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
