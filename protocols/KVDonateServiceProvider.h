
@protocol KVDonateServiceProvider <NSObject>

@required

- (NSObject<KVDonateService> *)makeConnection:(NSString *)arg1;
- (void)terminateConnection:(NSObject<KVDonateService> *)arg1;
- (KVDonateVersionLog *)versionLog;

@end
