
@protocol INIntentHandlerProvidingPrivate <INIntentHandlerProviding>

@optional

- (void)transactionDidCompleteForIntentIdentifier:(NSString *)arg1;
- (void)transactionWillBeginForIntentIdentifier:(NSString *)arg1;

@end
