
@interface BCMutableCloudSyncVersions : NSObject <BCCloudSyncVersions, NSSecureCoding> {
    long long  _cloudVersion;
    NSString * _dataType;
    NSPersistentHistoryToken * _historyToken;
    long long  _historyTokenOffset;
    long long  _localVersion;
    long long  _syncVersion;
}

@property (nonatomic) long long cloudVersion;
@property (nonatomic, copy) NSString *dataType;
@property (nonatomic, copy) NSPersistentHistoryToken *historyToken;
@property (nonatomic) long long historyTokenOffset;
@property (nonatomic) long long localVersion;
@property (nonatomic) long long syncVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)cloudVersion;
- (id)dataType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)historyToken;
- (long long)historyTokenOffset;
- (id)initWithCloudSyncVersions:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)localVersion;
- (void)setCloudVersion:(long long)arg1;
- (void)setDataType:(id)arg1;
- (void)setHistoryToken:(id)arg1;
- (void)setHistoryTokenOffset:(long long)arg1;
- (void)setLocalVersion:(long long)arg1;
- (void)setSyncVersion:(long long)arg1;
- (long long)syncVersion;

@end
