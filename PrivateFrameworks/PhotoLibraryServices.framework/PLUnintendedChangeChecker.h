
@interface PLUnintendedChangeChecker : NSObject {
    NSArray * _unexpectedCPLAssetKeys;
    NSArray * _unexpectedMomentAdditionalAssetAttributeKeys;
    NSArray * _unexpectedMomentAssetKeys;
}

+ (void)checkForUnintendedChangeOnMergeConflicts:(id)arg1 withBlock:(id /* block */)arg2;
+ (void)checkForUnintendedChangesDuringeSave:(id)arg1 withBlock:(id /* block */)arg2;
+ (bool)shouldCheckForUnintendedChanges;

- (void).cxx_destruct;
- (void)_checkForUnintendedCPLChangesOnObject:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_checkForUnintendedChangesOnObject:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_checkForUnintendedChangesOnObject:(id)arg1 withEntity:(id)arg2 unexpectedKeys:(id)arg3 block:(id /* block */)arg4;
- (void)_checkForUnintendedMomentChangesOnObject:(id)arg1 withBlock:(id /* block */)arg2;
- (void)checkForUnintendedChangeOnMergeConflicts:(id)arg1 withBlock:(id /* block */)arg2;
- (void)checkForUnintendedChangesDuringeSave:(id)arg1 withBlock:(id /* block */)arg2;
- (id)init;

@end
