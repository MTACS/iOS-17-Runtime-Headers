
@interface PKDynamicListSectionController : NSObject <PKDynamicSectionController> {
    NSAttributedString * _attributedFooterText;
    NSAttributedString * _attributedHeaderText;
    NSString * _footerText;
    NSString * _headerText;
    NSArray * _identifiers;
    id /* block */  _leadingSwipeActionsConfigurationProvider;
    id /* block */  _trailingSwipeActionsConfigurationProvider;
}

@property (nonatomic, copy) NSAttributedString *attributedFooterText;
@property (nonatomic, copy) NSAttributedString *attributedHeaderText;
@property (nonatomic, retain) UICollectionViewCellRegistration *cellRegistration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *footerText;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *headerText;
@property (nonatomic, retain) NSArray *identifiers;
@property (nonatomic, copy) id /* block */ leadingSwipeActionsConfigurationProvider;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ trailingSwipeActionsConfigurationProvider;

- (void).cxx_destruct;
- (id)attributedFooterText;
- (id)attributedHeaderText;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;
- (id)footerText;
- (id)headerText;
- (id)identifiers;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (id /* block */)leadingSwipeActionsConfigurationProvider;
- (void)setAttributedFooterText:(id)arg1;
- (void)setAttributedHeaderText:(id)arg1;
- (void)setFooterText:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setLeadingSwipeActionsConfigurationProvider:(id /* block */)arg1;
- (void)setTrailingSwipeActionsConfigurationProvider:(id /* block */)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (id /* block */)trailingSwipeActionsConfigurationProvider;

@end
