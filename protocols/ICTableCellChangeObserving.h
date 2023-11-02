
@protocol ICTableCellChangeObserving <NSObject>

@required

- (void)tableValueDidChangeAtColumnID:(NSUUID *)arg1 rowID:(NSUUID *)arg2 delta:(long long)arg3;

@end
