
@interface WFLibraryRecord : WFRecord {
    NSData * _cloudKitRecordMetadata;
    NSData * _data;
    NSString * _identifier;
    long long  _lastSyncedHash;
    NSString * _version;
}

@property (nonatomic, copy) NSData *cloudKitRecordMetadata;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) long long lastSyncedHash;
@property (nonatomic, readonly, copy) NSString *version;

- (void).cxx_destruct;
- (id)cloudKitRecordMetadata;
- (id)data;
- (id)identifier;
- (long long)lastSyncedHash;
- (void)setCloudKitRecordMetadata:(id)arg1;
- (void)setData:(id)arg1;
- (void)setLastSyncedHash:(long long)arg1;
- (id)version;

@end
