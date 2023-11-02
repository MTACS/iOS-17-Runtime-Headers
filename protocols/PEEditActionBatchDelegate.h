
@protocol PEEditActionBatchDelegate <NSObject>

@required

- (void)batch:(PEEditActionBatch *)arg1 didCancelAction:(long long)arg2;
- (void)batch:(PEEditActionBatch *)arg1 didCompleteAction:(long long)arg2 hasError:(bool)arg3;
- (void)batch:(PEEditActionBatch *)arg1 willStartAction:(long long)arg2;

@end
