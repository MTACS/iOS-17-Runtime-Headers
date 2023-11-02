
@protocol CSSecondPassProgressProviding <NSObject>

@required

- (void)cancelSecondPassRunning;
- (void)pendingSecondPassTriggerWasClearedForClient:(unsigned long long)arg1 deviceId:(NSString *)arg2;

@end
