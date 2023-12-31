
@protocol TTMergeableStringIDTracker <NSObject>

@required

- (bool)hasTopoIDsThatCanChange;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { id x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg1 toNewRangeID:(struct TopoIDRange { struct TopoID { id x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg2;

@end
