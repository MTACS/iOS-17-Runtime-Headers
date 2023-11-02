
@interface HMFHTTPClientConfiguration : HMFObject <NSCopying> {
    bool  _allowsAnonymousConnection;
    bool  _allowsCellularAccess;
    bool  _monitorsReachability;
    bool  _requiresEncryption;
    bool  _supportsWakeOnLAN;
}

@property bool allowsAnonymousConnection;
@property bool allowsCellularAccess;
@property bool monitorsReachability;
@property bool requiresEncryption;
@property bool supportsWakeOnLAN;

+ (id)defaultConfiguration;

- (bool)allowsAnonymousConnection;
- (bool)allowsCellularAccess;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)monitorsReachability;
- (bool)requiresEncryption;
- (void)setAllowsAnonymousConnection:(bool)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setMonitorsReachability:(bool)arg1;
- (void)setRequiresEncryption:(bool)arg1;
- (void)setSupportsWakeOnLAN:(bool)arg1;
- (bool)supportsWakeOnLAN;

@end
