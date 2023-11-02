
@protocol VCMediaStreamSyncSource <NSObject>

@required

- (void)addSyncSourceDelegate:(id <VCMediaStreamSyncSourceDelegate>)arg1;
- (long long)getSyncSourceSampleRate;
- (void)removeSyncSourceDelegate:(id <VCMediaStreamSyncSourceDelegate>)arg1;

@end
