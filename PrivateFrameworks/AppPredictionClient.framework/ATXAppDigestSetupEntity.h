
@interface ATXAppDigestSetupEntity : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleId;
    unsigned long long  _numBasicNotifications;
    unsigned long long  _numMessageNotifications;
    unsigned long long  _numTimeSensitiveNonMessageNotifications;
}

@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic) unsigned long long numBasicNotifications;
@property (nonatomic) unsigned long long numMessageNotifications;
@property (nonatomic) unsigned long long numTimeSensitiveNonMessageNotifications;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleId:(id)arg1 numBasicNotifications:(unsigned long long)arg2 numMessageNotifications:(unsigned long long)arg3 numTimeSenstiveNonMessageNotifications:(unsigned long long)arg4;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)numBasicNotifications;
- (unsigned long long)numMessageNotifications;
- (unsigned long long)numTimeSensitiveNonMessageNotifications;
- (void)setBundleId:(id)arg1;
- (void)setNumBasicNotifications:(unsigned long long)arg1;
- (void)setNumMessageNotifications:(unsigned long long)arg1;
- (void)setNumTimeSensitiveNonMessageNotifications:(unsigned long long)arg1;

@end
