
@interface ATXBackupFileManager : NSObject {
    NSString * _backupDirectory;
    <ATXBackupDataProviderDelegate> * _dataProviderDelegate;
    NSString * _deviceID;
    struct backup_file_hdr_s { 
        unsigned char backupId[16]; 
        unsigned int chunkCount; 
    }  _hdr;
}

@property (nonatomic, retain) NSString *backupDirectory;
@property (nonatomic) <ATXBackupDataProviderDelegate> *dataProviderDelegate;
@property (nonatomic, retain) NSString *deviceID;

- (void).cxx_destruct;
- (id)backupDirectory;
- (bool)commitWithContainerIdentifier:(id)arg1;
- (bool)compareBackupIDFromBackupWithPath:(id)arg1 toMarkerWithPath:(id)arg2;
- (id)containerIDForCloudKitRestore;
- (id)dataProviderDelegate;
- (id)deviceID;
- (id)initWithBackupDirectory:(id)arg1 dataProviderDelegate:(id)arg2;
- (bool)isD2DRestoreNeeded;
- (bool)isMobileBackupRestoreNeeded;
- (bool)isRestoreNeeded;
- (struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)openBackupFileForWriting:(id)arg1;
- (id)pathForFile:(id)arg1;
- (id)readBackupData:(id)arg1;
- (bool)restoreFromBackup:(id)arg1;
- (bool)restoreFromD2D;
- (bool)restoreFromMobileBackup;
- (void)setBackupDirectory:(id)arg1;
- (void)setDataProviderDelegate:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (id)writeBackupData:(id)arg1 toPath:(id)arg2;
- (bool)writeBackupFileForD2D;
- (id)writeBackupFileForDeviceID:(id)arg1 pareDown:(bool)arg2;
- (bool)writeBackupMarkers:(const char *)arg1;
- (bool)writeChunk:(id)arg1 withFilename:(id)arg2 toBackupFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg3;
- (bool)writeContainerID:(id)arg1;
- (bool)writeData:(id)arg1 toPath:(id)arg2;
- (bool)writeDeviceID:(id)arg1;

@end
