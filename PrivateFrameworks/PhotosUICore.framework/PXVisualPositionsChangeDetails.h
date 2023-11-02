
@interface PXVisualPositionsChangeDetails : NSObject {
    long long  _anchorBodyIndexAfterChanges;
    long long  _anchorBodyIndexBeforeChanges;
    long long  _anchorIndexAfterChanges;
    long long  _anchorIndexBeforeChanges;
    long long  _countAfterChanges;
    long long  _countBeforeChanges;
    NSIndexSet * _headerIndexesAfterChanges;
    NSIndexSet * _headerIndexesBeforeChanges;
}

@property (nonatomic, readonly) long long anchorBodyIndexAfterChanges;
@property (nonatomic, readonly) long long anchorBodyIndexBeforeChanges;
@property (nonatomic, readonly) long long anchorIndexAfterChanges;
@property (nonatomic, readonly) long long anchorIndexBeforeChanges;
@property (nonatomic, readonly) long long countAfterChanges;
@property (nonatomic, readonly) long long countBeforeChanges;
@property (nonatomic, readonly) NSIndexSet *headerIndexesAfterChanges;
@property (nonatomic, readonly) NSIndexSet *headerIndexesBeforeChanges;

+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 countAfterChanges:(long long)arg3 anchorIndexAfterChanges:(long long)arg4 anchorFan:(long long)arg5;
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 countAfterChanges:(long long)arg3 anchorIndexAfterChanges:(long long)arg4 anchorFan:(long long)arg5 anchorReload:(long long)arg6;
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 countAfterChanges:(long long)arg3 anchorRemoved:(long long)arg4 indexAfterChanges:(long long)arg5;
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 headerIndexesAfterChanges:(id)arg6 anchorFan:(long long)arg7 anchorReload:(long long)arg8;
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 headerIndexesAfterChanges:(id)arg6 reloadAllIncludingAnchor:(bool)arg7;
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorRemoved:(long long)arg5 indexAfterChanges:(long long)arg6 headerIndexesAfterChanges:(id)arg7;
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorInserted:(long long)arg2 indexBeforeChanges:(long long)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5;
+ (id)changeDetailsWithCountBeforeChanges:(long long)arg1 anchorInserted:(long long)arg2 indexBeforeChanges:(long long)arg3 headerIndexesBeforeChanges:(id)arg4 countAfterChanges:(long long)arg5 anchorIndexAfterChanges:(long long)arg6 headerIndexesAfterChanges:(id)arg7;

- (void).cxx_destruct;
- (long long)anchorBodyIndexAfterChanges;
- (long long)anchorBodyIndexBeforeChanges;
- (long long)anchorIndexAfterChanges;
- (long long)anchorIndexBeforeChanges;
- (id)arrayChangeDetailsWithItemsChanged:(bool)arg1;
- (struct { long long x1; long long x2; bool x3; })bodyVisualPositionAfterApplyingChangesToBodyIndex:(long long)arg1;
- (struct { long long x1; long long x2; bool x3; })bodyVisualPositionAfterRevertingChangesFromBodyIndex:(long long)arg1;
- (long long)countAfterChanges;
- (long long)countBeforeChanges;
- (id)headerIndexesAfterChanges;
- (id)headerIndexesBeforeChanges;
- (id)init;
- (id)initWithCountBeforeChanges:(long long)arg1 anchorIndexBeforeChanges:(long long)arg2 headerIndexesBeforeChanges:(id)arg3 countAfterChanges:(long long)arg4 anchorIndexAfterChanges:(long long)arg5 headerIndexesAfterChanges:(id)arg6;
- (struct { long long x1; long long x2; bool x3; })visualPositionAfterApplyingChangesToIndex:(long long)arg1;
- (struct { long long x1; long long x2; bool x3; })visualPositionAfterRevertingChangesFromIndex:(long long)arg1;

@end
