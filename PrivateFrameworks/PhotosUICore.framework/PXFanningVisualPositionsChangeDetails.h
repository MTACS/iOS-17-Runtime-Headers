
@interface PXFanningVisualPositionsChangeDetails : PXVisualPositionsChangeDetails {
    long long  _anchorFan;
    long long  _anchorReload;
}

- (struct { long long x1; long long x2; bool x3; })bodyVisualPositionAfterApplyingChangesToBodyIndex:(long long)arg1;
- (struct { long long x1; long long x2; bool x3; })bodyVisualPositionAfterRevertingChangesFromBodyIndex:(long long)arg1;
- (id)initWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 headerIndexesAfterChanges:(id)arg6;
- (id)initWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 headerIndexesAfterChanges:(id)arg6 anchorFan:(long long)arg7 anchorReload:(long long)arg8;

@end
