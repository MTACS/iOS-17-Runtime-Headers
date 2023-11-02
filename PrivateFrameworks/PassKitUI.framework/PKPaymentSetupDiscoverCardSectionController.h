
@interface PKPaymentSetupDiscoverCardSectionController : NSObject <PKDynamicSectionController> {
    UICollectionViewCellRegistration * _cellRegistration;
    NSArray * _identifiers;
}

@property (nonatomic, retain) UICollectionViewCellRegistration *cellRegistration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *identifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cellRegistration;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;
- (id)identifiers;
- (id)init;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)setCellRegistration:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (Class)supplementaryRegistrationClassForKind:(id)arg1 sectionIdentifier:(id)arg2;

@end
