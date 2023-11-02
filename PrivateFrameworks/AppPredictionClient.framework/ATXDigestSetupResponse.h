
@interface ATXDigestSetupResponse : NSObject {
    unsigned long long  _avgNumBasicNotifications;
    unsigned long long  _avgNumMessageNotifications;
    unsigned long long  _avgNumTimeSensitiveNonMessageNotifications;
    NSString * _bundleId;
    unsigned long long  _numBasicNotifications;
    unsigned long long  _numMessageNotifications;
    unsigned long long  _numTimeSensitiveNonMessageNotifications;
}

@property (nonatomic, readonly) unsigned long long avgNumBasicNotifications;
@property (nonatomic, readonly) unsigned long long avgNumMessageNotifications;
@property (nonatomic, readonly) unsigned long long avgNumTimeSensitiveNonMessageNotifications;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) unsigned long long numBasicNotifications;
@property (nonatomic, readonly) unsigned long long numMessageNotifications;
@property (nonatomic, readonly) unsigned long long numTimeSensitiveNonMessageNotifications;

- (void).cxx_destruct;
- (unsigned long long)avgNumBasicNotifications;
- (unsigned long long)avgNumMessageNotifications;
- (unsigned long long)avgNumTimeSensitiveNonMessageNotifications;
- (id)bundleId;
- (id)initWithBundleId:(id)arg1 avgNumBasicNotifications:(unsigned long long)arg2 avgNumMessageNotifications:(unsigned long long)arg3 avgNumTimeSensitiveNonMessageNotifications:(unsigned long long)arg4 numBasicNotifications:(unsigned long long)arg5 numMessageNotifications:(unsigned long long)arg6 numTimeSensitiveNonMessageNotifications:(unsigned long long)arg7;
- (unsigned long long)numBasicNotifications;
- (unsigned long long)numMessageNotifications;
- (unsigned long long)numTimeSensitiveNonMessageNotifications;

@end
