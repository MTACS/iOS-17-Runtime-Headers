
@protocol CHHapticClientInterface

@required

- (void)clientCompletedWithError:(NSError *)arg1;
- (void)clientDisconnectingForReason:(unsigned long long)arg1 error:(NSError *)arg2;
- (void)clientStoppedForReason:(unsigned long long)arg1 error:(NSError *)arg2;
- (void)sequenceFinished:(unsigned long long)arg1 error:(NSError *)arg2;

@end
