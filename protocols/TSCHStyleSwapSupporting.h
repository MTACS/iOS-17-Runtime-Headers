
@protocol TSCHStyleSwapSupporting <NSObject>

@required

- (TSCHStyleSwapUndoTuple *)applyStyleSwapTuple:(TSCHStyleSwapUndoTuple *)arg1;
- (<TSCHStyleOwning> *)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned long long)arg2;

@end
