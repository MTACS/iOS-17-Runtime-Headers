
@interface DKCloudUploadResults : NSObject {
    NSArray * _backupResults;
    DKCloudUploadResult * _syncResult;
}

@property (nonatomic, retain) NSArray *backupResults;
@property (nonatomic, retain) DKCloudUploadResult *syncResult;

- (void).cxx_destruct;
- (id)backupResults;
- (void)setBackupResults:(id)arg1;
- (void)setSyncResult:(id)arg1;
- (bool)success;
- (id)syncResult;

@end
