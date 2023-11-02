
@interface PUStorageTipListItem : NSObject <NSCopying> {
    NSString * _cloudQuotaBytesUsedIdentifier;
    long long  _count;
    unsigned long long  _storageTipType;
    NSString * _systemImageName;
    NSString * _title;
    long long  _totalSizeInBytes;
}

@property (nonatomic, readonly) NSString *cloudQuotaBytesUsedIdentifier;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) unsigned long long storageTipType;
@property (nonatomic, readonly) NSString *systemImageName;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long totalSizeInBytes;

+ (unsigned long long)storageTipTypeForCloudQuotaUsedBytesIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)cloudQuotaBytesUsedIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)initWithStorageTipType:(unsigned long long)arg1 count:(long long)arg2 totalSizeInBytes:(long long)arg3;
- (unsigned long long)storageTipType;
- (id)systemImageName;
- (id)title;
- (long long)totalSizeInBytes;

@end
