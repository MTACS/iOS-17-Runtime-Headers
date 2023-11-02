
@protocol SPRReadDelegate

@required

- (void)onUpdateWithEvent:(long long)arg1 mode:(long long)arg2;

@optional

- (void)onFailureWithError:(NSError *)arg1;
- (void)onSuccessWithTransactionData:(SPRTransactionData *)arg1;

@end
