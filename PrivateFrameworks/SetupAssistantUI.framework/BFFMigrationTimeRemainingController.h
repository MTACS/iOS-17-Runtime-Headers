
@interface BFFMigrationTimeRemainingController : BFFTimeRemainingController {
    MBDeviceTransferConnectionInfo * _connectionInfo;
    NSDateComponentsFormatter * _elapsedDurationFormatter;
    NSString * _internalProgressText;
    MBDeviceTransferProgress * _migrationProgress;
}

@property (nonatomic, retain) MBDeviceTransferConnectionInfo *connectionInfo;
@property (nonatomic, retain) NSDateComponentsFormatter *elapsedDurationFormatter;
@property (retain) NSString *internalProgressText;
@property (nonatomic, retain) MBDeviceTransferProgress *migrationProgress;

- (void).cxx_destruct;
- (id)connectionInfo;
- (id)elapsedDurationFormatter;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)internalProgressText;
- (id)migrationProgress;
- (void)setConnectionInfo:(id)arg1;
- (void)setDeviceConnectionInformation:(id)arg1;
- (void)setDeviceTransferProgress:(id)arg1;
- (void)setElapsedDurationFormatter:(id)arg1;
- (void)setInternalProgressText:(id)arg1;
- (void)setMigrationProgress:(id)arg1;
- (id)timeRemainingString:(double)arg1;
- (void)updateProgressSubtext;

@end
