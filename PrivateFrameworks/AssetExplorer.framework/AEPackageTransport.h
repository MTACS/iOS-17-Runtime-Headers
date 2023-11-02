
@interface AEPackageTransport : PXObservable {
    NSMutableOrderedSet * __allOrderedPackageIdentifiers;
    NSMutableDictionary * __stagedPackagesByIdentifier;
    <AEPackageTransportDelegate> * _delegate;
}

@property (nonatomic, readonly) NSMutableOrderedSet *_allOrderedPackageIdentifiers;
@property (nonatomic, readonly) NSMutableDictionary *_stagedPackagesByIdentifier;
@property (nonatomic) <AEPackageTransportDelegate> *delegate;
@property (nonatomic, readonly) long long expectedPackageCount;
@property (nonatomic, readonly) NSSet *expectedPackageIdentifiers;

- (void).cxx_destruct;
- (void)_addPackageToStaging:(id)arg1;
- (id)_allOrderedPackageIdentifiers;
- (id)_orderedStagedIdentifiersIncludingPendingIdentifier:(id)arg1;
- (void)_removePackageFromStagingWithIdentifier:(id)arg1;
- (id)_stagedPackagesByIdentifier;
- (void)addPendingPackageIdentifier:(id)arg1;
- (void)commitPackage:(id)arg1;
- (id)delegate;
- (long long)expectedPackageCount;
- (id)expectedPackageIdentifiers;
- (id)init;
- (id)mutableChangeObject;
- (id)orderedStagedIdentifiers;
- (id)packagesWithLivePhotoContent;
- (void)performChanges:(id /* block */)arg1;
- (unsigned long long)proposedStagedIndexForPendingIdentifier:(id)arg1;
- (void)removeAllExpectedPackagesWithIdentifiers:(id)arg1;
- (void)removePendingPackageIdentifier:(id)arg1;
- (void)reportError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)stagePackage:(id)arg1;
- (void)stagePackages:(id)arg1;
- (void)stagePackages:(id)arg1 andNotify:(bool)arg2;
- (id)stagedPackageForIdentifier:(id)arg1;
- (id)stagedPackages;
- (void)unstagePackageWithIdentifier:(id)arg1;
- (void)unstagePackageWithIdentifier:(id)arg1 andNotify:(bool)arg2;
- (void)unstagePackagesWithIdentifiers:(id)arg1;

@end
