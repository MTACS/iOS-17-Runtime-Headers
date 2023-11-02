
@protocol NFRemoteAdminManagerCallbacks <NSObject>

@required

- (void)appletStateChange:(NSString *)arg1;
- (void)readerModeCardIngestionStatus:(unsigned long long)arg1;
- (void)readerModeCardSessionToken:(NSString *)arg1;

@end
