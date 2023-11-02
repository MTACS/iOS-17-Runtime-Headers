
@protocol HMDResidentSyncClient

@required

- (void)performResidentRequest:(HMFMessage *)arg1 options:(unsigned long long)arg2;
- (void)performSync;

@end
