
@interface ICQBackupDevice : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _backupFailedByinBytes;
    NSNumber * _backupSize;
    NSNumber * _backupTimestamp;
    NSNumber * _bytesRequiredForBackup;
    NSString * _deleteButtonLabel;
    NSURL * _deleteURL;
    NSString * _detailViewController;
    NSString * _deviceName;
    NSString * _deviceSubtitle;
    NSString * _deviceUDID;
    ICQImageURL * _imageURL;
    bool  _isActive;
    bool  _isLocalBackup;
    ICQImageURL * _largeImageURL;
    NSNumber * _storageUsed;
    NSString * _storageUsedLabel;
}

@property (nonatomic, retain) NSNumber *backupFailedByinBytes;
@property (nonatomic, retain) NSNumber *backupSize;
@property (nonatomic, retain) NSNumber *backupTimestamp;
@property (nonatomic, retain) NSNumber *bytesRequiredForBackup;
@property (nonatomic, copy) NSString *deleteButtonLabel;
@property (nonatomic, retain) NSURL *deleteURL;
@property (nonatomic, copy) NSString *detailViewController;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, copy) NSString *deviceSubtitle;
@property (nonatomic, copy) NSString *deviceUDID;
@property (nonatomic, retain) ICQImageURL *imageURL;
@property (nonatomic) bool isActive;
@property (nonatomic) bool isLocalBackup;
@property (nonatomic, retain) ICQImageURL *largeImageURL;
@property (nonatomic, readonly) NSDictionary *rawDictionary;
@property (nonatomic, retain) NSNumber *storageUsed;
@property (nonatomic, copy) NSString *storageUsedLabel;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backupFailedByinBytes;
- (id)backupSize;
- (id)backupTimestamp;
- (id)bytesRequiredForBackup;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deleteButtonLabel;
- (id)deleteURL;
- (id)description;
- (id)detailViewController;
- (id)deviceName;
- (id)deviceSubtitle;
- (id)deviceUDID;
- (void)encodeWithCoder:(id)arg1;
- (id)imageURL;
- (id)initWithCoder:(id)arg1;
- (bool)isActive;
- (bool)isLocalBackup;
- (id)largeImageURL;
- (id)rawDictionary;
- (void)setBackupFailedByinBytes:(id)arg1;
- (void)setBackupSize:(id)arg1;
- (void)setBackupTimestamp:(id)arg1;
- (void)setBytesRequiredForBackup:(id)arg1;
- (void)setDeleteButtonLabel:(id)arg1;
- (void)setDeleteURL:(id)arg1;
- (void)setDetailViewController:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDeviceSubtitle:(id)arg1;
- (void)setDeviceUDID:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setIsLocalBackup:(bool)arg1;
- (void)setLargeImageURL:(id)arg1;
- (void)setStorageUsed:(id)arg1;
- (void)setStorageUsedLabel:(id)arg1;
- (id)storageUsed;
- (id)storageUsedLabel;

@end
