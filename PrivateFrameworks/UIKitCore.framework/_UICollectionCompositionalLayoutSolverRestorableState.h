
@interface _UICollectionCompositionalLayoutSolverRestorableState : NSObject <_UICollectionCompositionalLayoutSolverRestorableState> {
    NSArray * _bookmarkSnapshotters;
    NSIndexSet * _orthogonalSectionIndexes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applyToSolver:(id)arg1;

@end
