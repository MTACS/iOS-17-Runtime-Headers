
@protocol STSSessionBaseDelegate <NSObject>

@optional

- (void)stsSession:(STSSessionBase *)arg1 didEnd:(NSError *)arg2;
- (void)stsSession:(STSSessionBase *)arg1 didStart:(NSError *)arg2;
- (void)stsSessionDidEndUnexpectedly:(STSSessionBase *)arg1 errorCode:(unsigned long long)arg2;

@end
