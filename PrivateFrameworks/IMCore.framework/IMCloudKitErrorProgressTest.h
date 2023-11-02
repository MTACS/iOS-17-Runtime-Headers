
@interface IMCloudKitErrorProgressTest : IMCloudKitSyncProgressRuntimeTest {
    NSError * _error;
}

@property (nonatomic, copy) NSError *error;

- (void).cxx_destruct;
- (id)error;
- (id)initWithErrorCode:(long long)arg1;
- (void)setError:(id)arg1;
- (void)willUpdateSyncState:(id)arg1;

@end
