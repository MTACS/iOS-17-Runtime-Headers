
@protocol IPXPCClientInterface <NSObject>

@required

- (void)installableForIdentity:(LSApplicationIdentity *)arg1 progressChanged:(IPInstallableProgressData *)arg2;
- (void)installableForIdentity:(LSApplicationIdentity *)arg1 progressEndedForReason:(unsigned long long)arg2;

@end
