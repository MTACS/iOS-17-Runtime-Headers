
@interface PKPaymentSetupListSectionController : NSObject <PKDynamicSectionController> {
    UICollectionViewCellRegistration * _cellRegistration;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _headerDirectionalLayoutMargins;
    NSArray * _identifiers;
    NSArray * _items;
}

@property (nonatomic, retain) UICollectionViewCellRegistration *cellRegistration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } headerDirectionalLayoutMargins;
@property (nonatomic, retain) NSArray *identifiers;
@property (nonatomic, retain) NSArray *items;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applyHeaderConfigurationProperties:(id)arg1 sectionIdentifier:(id)arg2;
- (id)cellRegistration;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;
- (id)decoratePaymentSetListCell:(id)arg1 forItem:(id)arg2;
- (id)defaultListLayout;
- (id)footerAttributedStringForIdentifier:(id)arg1;
- (id)headerAttributedStringForIdentifier:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })headerDirectionalLayoutMargins;
- (id)identifiers;
- (id)init;
- (id)initWithIdentifiers:(id)arg1;
- (id)items;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)setCellRegistration:(id)arg1;
- (void)setHeaderDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setItems:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
