
@interface DMPluginParameters : NSObject {
    NSString * _backupDeviceUUID;
    NSDictionary * _dispositionSupersetOfContext;
}

@property (nonatomic, copy) NSString *backupDeviceUUID;
@property (nonatomic, retain) NSDictionary *dispositionSupersetOfContext;

+ (id)backupDeviceUUIDFromDispositionSupersetOfContext:(id)arg1;

- (void).cxx_destruct;
- (id)backupDeviceUUID;
- (id)dispositionSupersetOfContext;
- (id)initWithDispositionSupersetOfContext:(id)arg1 backupDeviceUUID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setBackupDeviceUUID:(id)arg1;
- (void)setDispositionSupersetOfContext:(id)arg1;

@end
