
@protocol NFRemoteAdminEventListener <NSObject>

@optional

- (void)appletStateChange:(NSString *)arg1;
- (void)didReceiveFatalCommunicationError;
- (void)readerModeCardIngestionStatus:(unsigned long long)arg1;
- (void)readerModeCardSessionToken:(NSString *)arg1;

@end
