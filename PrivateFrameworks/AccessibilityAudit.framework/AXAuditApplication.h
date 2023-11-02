
@interface AXAuditApplication : NSObject {
    NSString * _bundleIdentifier;
    NSString * _displayName;
    int  _pid;
    AXAuditPSN * _psnObj;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) int pid;
@property (nonatomic, retain) AXAuditPSN *psnObj;

+ (void)registerTransportableObjectWithManager:(id)arg1;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)pid;
- (id)psnObj;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setPsnObj:(id)arg1;

@end
