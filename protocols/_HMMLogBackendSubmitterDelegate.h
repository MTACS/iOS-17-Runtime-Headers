
@protocol _HMMLogBackendSubmitterDelegate

@required

- (void)submitMessages:(NSArray *)arg1 serviceName:(NSString *)arg2 sessionUUID:(NSUUID *)arg3 isRealtime:(bool)arg4;

@end
