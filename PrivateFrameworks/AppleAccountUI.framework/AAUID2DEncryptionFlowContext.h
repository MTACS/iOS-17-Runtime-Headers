
@interface AAUID2DEncryptionFlowContext : CDPUIDeviceToDeviceEncryptionFlowContext {
    unsigned long long  _contextType;
}

@property (nonatomic) unsigned long long contextType;

+ (id)contextWithType:(unsigned long long)arg1;
+ (id)contextWithType:(unsigned long long)arg1 altDSID:(id)arg2;

- (unsigned long long)contextType;
- (long long)deviceToDeviceEncryptionUpgradeType;
- (long long)deviceToDeviceEncryptionUpgradeUIStyle;
- (id)initWithType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 altDSID:(id)arg2;
- (bool)requiresSynchronousRepair;
- (void)setContextType:(unsigned long long)arg1;

@end
