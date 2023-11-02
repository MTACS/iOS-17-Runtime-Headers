
@protocol MTSyncService <NSObject>

@required

- (<MTSyncServiceDelegate> *)delegate;
- (<MTSyncToken> *)requestSync:(unsigned long long)arg1;
- (bool)resume:(id*)arg1;
- (void)setDelegate:(id <MTSyncServiceDelegate>)arg1;
- (void)suspend;

@end
